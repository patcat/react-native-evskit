import Foundation
import NativeEvsKit

public enum EvsElementAdapter {

  // MARK: - Helpers

  private static func asFloat(_ val: Any?) -> Float? {
    if let n = val as? NSNumber { return n.floatValue }
    if let f = val as? Float { return f }
    if let d = val as? Double { return Float(d) }
    if let i = val as? Int { return Float(i) }
    return nil
  }

  private static func asInt32(_ val: Any?) -> Int32? {
    if let n = val as? NSNumber { return n.int32Value }
    if let i = val as? Int32 { return i }
    if let i = val as? Int { return Int32(i) }
    return nil
  }

  private static func asBool(_ val: Any?) -> Bool? {
    if let n = val as? NSNumber { return n.boolValue }
    if let b = val as? Bool { return b }
    return nil
  }

  private static func asString(_ val: Any?) -> String? {
    return val as? String
  }

  private static func asPoints(_ val: Any?) -> [(Float, Float)] {
    guard let list = val as? [[String: Any]] else { return [] }
    return list.compactMap { dict in
      guard let x = asFloat(dict["x"]), let y = asFloat(dict["y"]) else { return nil }
      return (x, y)
    }
  }

  public static func mapFont(_ fontStr: String?) -> Font {
    switch fontStr {
    case "small":
      return Font(stockFont: .small)
    case "large":
      return Font(stockFont: .large)
    default:
      return Font(stockFont: .medium)
    }
  }

  private static func mapAlign(_ alignStr: String?) -> Align {
    switch alignStr {
    case "left":
      return Align.left
    case "right":
      return Align.right
    default:
      return Align.center
    }
  }

  public static func mapAlignV(_ alignStr: String?) -> AlignV {
    switch alignStr {
    case "top":
      return AlignV.top
    case "center":
      return AlignV.center
    default:
      return AlignV.bottom
    }
  }

  private static func mapDirection(_ dirStr: String?) -> Direction {
    switch dirStr {
    case "down":
      return Direction.down
    case "left":
      return Direction.left
    case "right":
      return Direction.right
    default:
      return Direction.up
    }
  }

  private static func mapImageSlot(_ slotStr: String?) -> ImgSrc.Slot {
    switch slotStr {
    case "s1":
      return .s1
    case "s2":
      return .s2
    case "s3":
      return .s3
    case "s4":
      return .s4
    case "s5":
      return .s5
    default:
      return .s1
    }
  }

  // MARK: - Creation

  public static func create(type: String, spec: [String: Any]) -> UIElement? {
    let element: UIElement

    switch type {
    case "text":
      element = Text()
    case "line":
      let x = asFloat(spec["x"]) ?? 0
      let y = asFloat(spec["y"]) ?? 0
      let x1 = asFloat(spec["x1"]) ?? x
      let y1 = asFloat(spec["y1"]) ?? y
      element = Line(x: x, y: y, x1: x1, y1: y1)
    case "rect":
      element = Rect()
    case "arrow":
      element = Arrow()
    case "arc":
      element = Arc()
    case "ellipse":
      element = Ellipse()
    case "polygon":
      element = Polygon()
    case "path":
      element = Path()
    case "image":
      element = Image()
    default:
      return nil
    }

    update(element: element, type: type, spec: spec)
    return element
  }

  // MARK: - Update

  public static func update(element: UIElement, type: String, spec: [String: Any]) {
    // Common properties
    if let x = asFloat(spec["x"]) {
      element.setX(x: x)
    }
    if let y = asFloat(spec["y"]) {
      element.setY(y: y)
    }
    if let width = asFloat(spec["width"]) {
      element.setWidth(width: width)
    }
    if let height = asFloat(spec["height"]) {
      element.setHeight(height: height)
    }
    if let color = asInt32(spec["color"]) {
      element.setForegroundColor(color: color)
    }
    if let bg = asInt32(spec["backgroundColor"]) {
      element.setBackgroundColor(color: bg)
    }
    if let visible = asBool(spec["visible"]) {
      element.setVisibility(isVisible: visible)
    }
    if let thickness = asInt32(spec["thickness"]) {
      element.setPenThickness(thicknessPixels: thickness)
    }

    // Fillable elements
    if let fillable = element as? FillableElement {
      if let fillColor = asInt32(spec["fillColor"]) {
        fillable.setFillColor(color: fillColor)
      }
    }

    // Type-specific properties
    switch type {
    case "text":
      if let textElem = element as? Text {
        if let text = asString(spec["text"]) {
          textElem.setText(text: text)
        }
        if let fontStr = asString(spec["font"]) {
          textElem.setResource(font: mapFont(fontStr))
        }
        if let alignStr = asString(spec["align"]) {
          textElem.setTextAlign(align: mapAlign(alignStr))
        }
        if let ellipsis = asBool(spec["ellipsis"]) {
          textElem.setEllipsis(ellipsis: ellipsis)
        }
      }

    case "line":
      if let lineElem = element as? Line {
        let x = asFloat(spec["x"]) ?? lineElem.getX()
        let y = asFloat(spec["y"]) ?? lineElem.getY()
        if let x1 = asFloat(spec["x1"]), let y1 = asFloat(spec["y1"]) {
          let dx = x1 - x
          let dy = y1 - y
          lineElem.toCoord(lengthX: dx, lengthY: dy)
        }
      }

    case "rect":
      if let rectElem = element as? Rect {
        if let radius = asFloat(spec["radius"]) {
          rectElem.setRoundedCorners(radiusPix: radius)
        }
      }

    case "arrow":
      if let arrowElem = element as? Arrow {
        if let dirStr = asString(spec["direction"]) {
          arrowElem.setDirection(direction: mapDirection(dirStr))
        }
        if let head = asFloat(spec["headLength"]) {
          arrowElem.setArrowHeadInfo(length: head)
        }
        let bodyW = asFloat(spec["bodyWidth"]) ?? 10
        let bodyL = asFloat(spec["bodyLength"]) ?? 30
        arrowElem.setArrowBodyInfo(length: bodyL, width: bodyW)
      }

    case "arc":
      if let arcElem = element as? Arc {
        let cx = asFloat(spec["x"]) ?? arcElem.getCenterX()
        let cy = asFloat(spec["y"]) ?? arcElem.getCenterY()
        let r = asFloat(spec["radius"]) ?? arcElem.getRadius()
        let fromDeg = asFloat(spec["angleFromDeg"]) ?? arcElem.getAngleFromDeg()
        let toDeg = asFloat(spec["angleToDeg"]) ?? arcElem.getAngleToDeg()
        arcElem.setArcInfo(centerX: cx, centerY: cy, radius: r, angleFromDeg: fromDeg, angleToDeg: toDeg)
      }

    case "ellipse":
      if let ellipseElem = element as? Ellipse {
        let cx = asFloat(spec["x"]) ?? ellipseElem.getCenterX()
        let cy = asFloat(spec["y"]) ?? ellipseElem.getCenterY()
        let r = asFloat(spec["radiusX"]) ?? asFloat(spec["radius"]) ?? ellipseElem.getRadiusX()
        ellipseElem.setEllipseInfo(centerX: cx, centerY: cy, radius: r)
      }

    case "polygon":
      if let polyElem = element as? Polygon {
        let pts = asPoints(spec["points"])
        if !pts.isEmpty {
          polyElem.clear()
          for pt in pts {
            polyElem.addPoint(x: pt.0, y: pt.1)
          }
        }
      }

    case "path":
      if let pathElem = element as? Path {
        let pts = asPoints(spec["points"])
        if !pts.isEmpty {
          pathElem.clear()
          for (i, pt) in pts.enumerated() {
            if i == 0 {
              pathElem.moveTo(x: pt.0, y: pt.1)
            } else {
              pathElem.lineTo(x: pt.0, y: pt.1)
            }
          }
          if asBool(spec["closed"]) == true {
            pathElem.close()
          }
        }
      }

    case "image":
      if let imgElem = element as? Image {
        if let resource = asString(spec["resource"]) {
          let slot = mapImageSlot(asString(spec["slot"]))
          imgElem.setResource(image: ImgSrc(nameWithExtension: resource, slot: slot))
        }
      }

    default:
      break
    }
  }
}
