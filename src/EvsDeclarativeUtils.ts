import { processColor } from "react-native";
import type {
  EvsColorProp,
  EvsCoordinate,
  EvsDeclarativeElement,
  EvsDeclarativeScreenSpec,
  EvsNormalizedElement,
  EvsNormalizedPopupSpec,
  EvsNormalizedScreenSpec,
  EvsPopupMessageSpec,
} from "./EvsDeclarative.types";

/**
 * Converts a React Native color prop into a 32-bit RGBA/ARGB integer.
 */
export function normalizeColor(color?: EvsColorProp): number | undefined {
  if (color === undefined || color === null) return undefined;
  if (typeof color === "number") return color;
  const processed = processColor(color);
  return typeof processed === "number" ? processed : undefined;
}

/**
 * Resolves a coordinate that can be a number, a percentage string, or 'center'.
 */
export function resolveCoord(
  coord: EvsCoordinate | undefined,
  dimension: number,
  defaultValue = 0
): number {
  if (coord === undefined || coord === null) return defaultValue;
  if (typeof coord === "number") return coord;
  if (coord === "center") return dimension / 2;
  if (typeof coord === "string" && coord.endsWith("%")) {
    const parsed = parseFloat(coord);
    return isNaN(parsed) ? defaultValue : (parsed / 100) * dimension;
  }
  return defaultValue;
}

/**
 * Normalizes a single declarative element for the native bridge.
 */
export function normalizeElement(
  elem: EvsDeclarativeElement,
  screenWidth: number,
  screenHeight: number
): EvsNormalizedElement {
  const base: EvsNormalizedElement = {
    key: elem.key,
    type: elem.type,
    x: elem.x !== undefined ? resolveCoord(elem.x, screenWidth, 0) : undefined,
    y: elem.y !== undefined ? resolveCoord(elem.y, screenHeight, 0) : undefined,
    width: elem.width,
    height: elem.height,
    color: normalizeColor(elem.color),
    fillColor: normalizeColor(elem.fillColor),
    visible: elem.visible,
    thickness: elem.thickness,
  };

  switch (elem.type) {
    case "text":
      return {
        ...base,
        text: elem.text,
        font: elem.font ?? "medium",
        align: elem.align ?? "center",
        ellipsis: elem.ellipsis,
      };

    case "line":
      return {
        ...base,
        x1: resolveCoord(elem.x1, screenWidth, 0),
        y1: resolveCoord(elem.y1, screenHeight, 0),
        thickness: elem.thickness,
      };

    case "rect":
      return {
        ...base,
        radius: elem.radius,
      };

    case "arrow":
      return {
        ...base,
        direction: elem.direction,
        headLength: elem.headLength,
        bodyWidth: elem.bodyWidth,
        bodyLength: elem.bodyLength,
        thickness: elem.thickness,
      };

    case "arc":
      return {
        ...base,
        radius: elem.radius,
        angleFromDeg: elem.angleFromDeg,
        angleToDeg: elem.angleToDeg,
        thickness: elem.thickness,
      };

    case "ellipse":
      return {
        ...base,
        radiusX: elem.radiusX ?? elem.radius,
        radiusY: elem.radiusY ?? elem.radius,
      };

    case "polygon":
      return {
        ...base,
        points: elem.points,
      };

    case "path":
      return {
        ...base,
        points: elem.points,
        closed: elem.closed,
      };

    case "image":
      return {
        ...base,
        resource: elem.resource,
        slot: elem.slot,
      };

    default:
      return base;
  }
}

/**
 * Normalizes a screen spec for the native bridge.
 */
export function normalizeScreenSpec(
  spec: EvsDeclarativeScreenSpec
): EvsNormalizedScreenSpec {
  const width = spec.width ?? 420;
  const height = spec.height ?? 150;

  const elements = (spec.elements || []).map((elem) =>
    normalizeElement(elem, width, height)
  );

  return {
    id: spec.id,
    width,
    height,
    elements,
  };
}

/**
 * Normalizes a popup message spec for the native bridge.
 */
export function normalizePopupSpec(
  spec: EvsPopupMessageSpec
): EvsNormalizedPopupSpec {
  return {
    text: spec.text,
    font: spec.font ?? "medium",
    color: normalizeColor(spec.color),
    alignV: spec.alignV ?? "bottom",
    timeoutMs: spec.timeoutMs ?? 3000,
  };
}
