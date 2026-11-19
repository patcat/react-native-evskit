/**
 * Types for declarative Everysight Maverick glasses screens.
 */

import type { TouchDirection } from "./EvsKit.types";

/** Accepts standard React Native color strings (e.g. '#00ff00', 'lime', 'rgba(...)') or 32-bit integer. */
export type EvsColorProp = string | number;

/** Absolute pixel offset or percentage string relative to screen width/height, or 'center'. */
export type EvsCoordinate = number | `${number}%` | "center";

export type EvsStockFont = "small" | "medium" | "large";
export type EvsTextAlign = "left" | "center" | "right";
export type EvsAlignV = "top" | "center" | "bottom";
export type EvsDirection = "up" | "down" | "left" | "right";

export interface EvsPoint {
  x: number;
  y: number;
}

export interface EvsElementBase {
  /** Stable identity key used for in-place native reconciliation. */
  key: string;
  x?: EvsCoordinate;
  y?: EvsCoordinate;
  width?: number;
  height?: number;
  color?: EvsColorProp;
  fillColor?: EvsColorProp;
  visible?: boolean;
  thickness?: number;
}

export interface EvsTextElement extends EvsElementBase {
  type: "text";
  text: string;
  font?: EvsStockFont;
  align?: EvsTextAlign;
  ellipsis?: boolean;
}

export interface EvsLineElement extends EvsElementBase {
  type: "line";
  x1: EvsCoordinate;
  y1: EvsCoordinate;
  thickness?: number;
}

export interface EvsRectElement extends EvsElementBase {
  type: "rect";
  radius?: number;
}

export interface EvsArrowElement extends EvsElementBase {
  type: "arrow";
  direction: EvsDirection;
  headLength?: number;
  bodyWidth?: number;
  bodyLength?: number;
  thickness?: number;
}

export interface EvsArcElement extends EvsElementBase {
  type: "arc";
  radius: number;
  angleFromDeg: number;
  angleToDeg: number;
  thickness?: number;
}

export interface EvsEllipseElement extends EvsElementBase {
  type: "ellipse";
  radiusX?: number;
  radiusY?: number;
  radius?: number;
}

export interface EvsPolygonElement extends EvsElementBase {
  type: "polygon";
  points: EvsPoint[];
}

export interface EvsPathElement extends EvsElementBase {
  type: "path";
  points: EvsPoint[];
  closed?: boolean;
}

export interface EvsImageElement extends EvsElementBase {
  type: "image";
  resource: string;
  slot?: "s1" | "s2" | "s3" | "s4" | "s5";
}

export type EvsDeclarativeElement =
  | EvsTextElement
  | EvsLineElement
  | EvsRectElement
  | EvsArrowElement
  | EvsArcElement
  | EvsEllipseElement
  | EvsPolygonElement
  | EvsPathElement
  | EvsImageElement;

export interface EvsDeclarativeScreenSpec {
  id: string;
  width?: number;
  height?: number;
  elements: EvsDeclarativeElement[];
}

// ---------------------------------------------------------------------------
// Normalized types sent across the Expo module bridge
// ---------------------------------------------------------------------------

export interface EvsNormalizedElement {
  key: string;
  type: string;
  x?: number;
  y?: number;
  width?: number;
  height?: number;
  color?: number;
  fillColor?: number;
  visible?: boolean;

  // Text
  text?: string;
  font?: EvsStockFont;
  align?: EvsTextAlign;
  ellipsis?: boolean;

  // Line
  x1?: number;
  y1?: number;
  thickness?: number;

  // Rect
  radius?: number;

  // Arrow
  direction?: EvsDirection;
  headLength?: number;
  bodyWidth?: number;
  bodyLength?: number;

  // Arc
  angleFromDeg?: number;
  angleToDeg?: number;

  // Ellipse
  radiusX?: number;
  radiusY?: number;

  // Polygon & Path
  points?: EvsPoint[];
  closed?: boolean;

  // Image
  resource?: string;
  slot?: string;
}

export interface EvsNormalizedScreenSpec {
  id: string;
  width: number;
  height: number;
  elements: EvsNormalizedElement[];
}

export interface EvsPopupMessageSpec {
  text: string;
  font?: EvsStockFont;
  color?: EvsColorProp;
  alignV?: EvsAlignV;
  timeoutMs?: number;
}

export interface EvsNormalizedPopupSpec {
  text: string;
  font: EvsStockFont;
  color?: number;
  alignV: EvsAlignV;
  timeoutMs: number;
}

export interface EvsScreenTouchEvent {
  screenId: string;
  direction: TouchDirection;
}
