import React, { useEffect } from "react";
import type {
  EvsArcElement,
  EvsArrowElement,
  EvsDeclarativeElement,
  EvsEllipseElement,
  EvsImageElement,
  EvsLineElement,
  EvsPathElement,
  EvsPolygonElement,
  EvsRectElement,
  EvsScreenTouchEvent,
  EvsTextElement,
} from "./EvsDeclarative.types";
import { addEvsKitListener, EvsScreens } from "./index";

export interface GlassesScreenProps {
  id: string;
  width?: number;
  height?: number;
  visible?: boolean;
  onTouch?: (event: EvsScreenTouchEvent) => void;
  children?: React.ReactNode;
}

const TYPE_KEY = Symbol.for("evs.element.type");

function createMarkerComponent<P extends { key?: string }>(type: string) {
  const Component: React.FC<P> = () => null;
  (Component as any)[TYPE_KEY] = type;
  return Component;
}

export const GlassesText = createMarkerComponent<Omit<EvsTextElement, "type">>("text");
export const GlassesLine = createMarkerComponent<Omit<EvsLineElement, "type">>("line");
export const GlassesRect = createMarkerComponent<Omit<EvsRectElement, "type">>("rect");
export const GlassesArrow = createMarkerComponent<Omit<EvsArrowElement, "type">>("arrow");
export const GlassesArc = createMarkerComponent<Omit<EvsArcElement, "type">>("arc");
export const GlassesEllipse = createMarkerComponent<Omit<EvsEllipseElement, "type">>("ellipse");
export const GlassesPolygon = createMarkerComponent<Omit<EvsPolygonElement, "type">>("polygon");
export const GlassesPath = createMarkerComponent<Omit<EvsPathElement, "type">>("path");
export const GlassesImage = createMarkerComponent<Omit<EvsImageElement, "type">>("image");

function extractElements(children: React.ReactNode): EvsDeclarativeElement[] {
  const elements: EvsDeclarativeElement[] = [];

  React.Children.forEach(children, (child) => {
    if (!React.isValidElement(child)) return;

    const childType = child.type as any;
    const type = childType?.[TYPE_KEY];
    if (type) {
      const props = child.props as any;
      const rawKey = child.key != null ? String(child.key) : props.key;
      const cleanKey = rawKey ? rawKey.replace(/^\.\$/, "") : `elem_${elements.length}`;

      elements.push({
        ...props,
        type,
        key: cleanKey,
      });
    }
  });

  return elements;
}

/**
 * Declarative component for rendering a screen directly on Everysight Maverick glasses.
 *
 * Renders `null` on the host mobile app while projecting the vector element
 * hierarchy directly onto the connected glasses display.
 *
 * @example
 * <GlassesScreen id="hud" width={420} height={150}>
 *   <GlassesText key="speed" x="50%" y={75} text="45 KM/H" font="large" color="#00ff00" />
 * </GlassesScreen>
 */
export function GlassesScreen({
  id,
  width = 420,
  height = 150,
  visible = true,
  onTouch,
  children,
}: GlassesScreenProps) {
  const elements = extractElements(children);

  // Sync screen to glasses whenever visible or elements change
  useEffect(() => {
    if (visible) {
      EvsScreens.render({
        id,
        width,
        height,
        elements,
      }).catch((err) => {
        console.warn(`[react-native-evskit] Failed to render glasses screen "${id}":`, err);
      });
    } else {
      EvsScreens.remove(id).catch(() => {});
    }
  });

  // Cleanup on unmount
  useEffect(() => {
    return () => {
      EvsScreens.remove(id).catch(() => {});
    };
  }, [id]);

  // Screen-level touch routing
  useEffect(() => {
    if (!onTouch || !visible) return;

    const subscription = addEvsKitListener("onScreenTouch", (event) => {
      if (event.screenId === id) {
        onTouch(event);
      }
    });

    return () => {
      subscription.remove();
    };
  }, [id, visible, onTouch]);

  return null;
}

/**
 * Hook to listen for touch gestures directed at a specific glasses screen.
 */
export function useGlassesTouch(
  screenId: string,
  callback: (event: EvsScreenTouchEvent) => void
) {
  useEffect(() => {
    const subscription = addEvsKitListener("onScreenTouch", (event) => {
      if (event.screenId === screenId) {
        callback(event);
      }
    });
    return () => subscription.remove();
  }, [screenId, callback]);
}
