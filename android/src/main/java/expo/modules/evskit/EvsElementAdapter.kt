package expo.modules.evskit

import UIKit.app.data.Align
import UIKit.app.data.AlignV
import UIKit.app.data.Direction
import UIKit.app.resources.Font
import UIKit.app.resources.ImgSrc
import UIKit.widgets.*

object EvsElementAdapter {

  fun asFloat(valObj: Any?): Float? {
    return when (valObj) {
      is Number -> valObj.toFloat()
      is String -> valObj.toFloatOrNull()
      else -> null
    }
  }

  fun asInt(valObj: Any?): Int? {
    return when (valObj) {
      is Number -> valObj.toInt()
      is String -> valObj.toIntOrNull()
      else -> null
    }
  }

  fun asBool(valObj: Any?): Boolean? {
    return when (valObj) {
      is Boolean -> valObj
      is String -> valObj.toBooleanStrictOrNull()
      else -> null
    }
  }

  fun asString(valObj: Any?): String? = valObj as? String

  @Suppress("UNCHECKED_CAST")
  fun asPoints(valObj: Any?): List<Pair<Float, Float>> {
    val list = valObj as? List<Map<String, Any?>> ?: return emptyList()
    return list.mapNotNull { dict ->
      val x = asFloat(dict["x"])
      val y = asFloat(dict["y"])
      if (x != null && y != null) Pair(x, y) else null
    }
  }

  fun mapFont(fontStr: String?): Font.StockFont {
    return when (fontStr) {
      "small" -> Font.StockFont.Small
      "large" -> Font.StockFont.Large
      else -> Font.StockFont.Medium
    }
  }

  fun mapAlign(alignStr: String?): Align {
    return when (alignStr) {
      "left" -> Align.left
      "right" -> Align.right
      else -> Align.center
    }
  }

  fun mapAlignV(alignStr: String?): AlignV {
    return when (alignStr) {
      "top" -> AlignV.top
      "center" -> AlignV.center
      else -> AlignV.bottom
    }
  }

  fun mapDirection(dirStr: String?): Direction {
    return when (dirStr) {
      "down" -> Direction.down
      "left" -> Direction.left
      "right" -> Direction.right
      else -> Direction.up
    }
  }

  fun mapImageSlot(slotStr: String?): ImgSrc.Slot {
    return when (slotStr) {
      "s1" -> ImgSrc.Slot.s1
      "s2" -> ImgSrc.Slot.s2
      "s3" -> ImgSrc.Slot.s3
      "s4" -> ImgSrc.Slot.s4
      "s5" -> ImgSrc.Slot.s5
      else -> ImgSrc.Slot.s1
    }
  }

  fun create(type: String, spec: Map<String, Any?>): UIElement? {
    val element: UIElement = when (type) {
      "text" -> Text()
      "line" -> Line()
      "rect" -> Rect()
      "arrow" -> Arrow()
      "arc" -> Arc()
      "ellipse" -> Ellipse()
      "polygon" -> Polygon()
      "path" -> Path()
      "image" -> Image()
      else -> return null
    }
    update(element, type, spec)
    return element
  }

  fun update(element: UIElement, type: String, spec: Map<String, Any?>) {
    asFloat(spec["x"])?.let { element.setX(it) }
    asFloat(spec["y"])?.let { element.setY(it) }
    asFloat(spec["width"])?.let { element.setWidth(it) }
    asFloat(spec["height"])?.let { element.setHeight(it) }
    asInt(spec["color"])?.let { element.setForegroundColor(it) }
    asInt(spec["backgroundColor"])?.let { element.setBackgroundColor(it) }
    asBool(spec["visible"])?.let { element.setVisibility(it) }
    asInt(spec["thickness"])?.let { element.setPenThickness(it) }

    if (element is FillableElement) {
      asInt(spec["fillColor"])?.let { element.setFillColor(it) }
    }

    when (type) {
      "text" -> {
        if (element is Text) {
          asString(spec["text"])?.let { element.setText(it) }
          element.setResource(mapFont(asString(spec["font"])))
          element.setTextAlign(mapAlign(asString(spec["align"])))
          asBool(spec["ellipsis"])?.let { element.setEllipsis(it) }
        }
      }
      "line" -> {
        if (element is Line) {
          val x = asFloat(spec["x"]) ?: element.x
          val y = asFloat(spec["y"]) ?: element.y
          val x1 = asFloat(spec["x1"])
          val y1 = asFloat(spec["y1"])
          if (x1 != null && y1 != null) {
            element.toCoord(x1 - x, y1 - y)
          }
        }
      }
      "rect" -> {
        if (element is Rect) {
          asFloat(spec["radius"])?.let { element.setRoundedCorners(it) }
        }
      }
      "arrow" -> {
        if (element is Arrow) {
          element.setDirection(mapDirection(asString(spec["direction"])))
          asFloat(spec["headLength"])?.let { element.setArrowHeadInfo(it) }
          val bodyW = asFloat(spec["bodyWidth"]) ?: 10f
          val bodyL = asFloat(spec["bodyLength"]) ?: 30f
          element.setArrowBodyInfo(bodyL, bodyW)
        }
      }
      "arc" -> {
        if (element is Arc) {
          val cx = asFloat(spec["x"]) ?: element.centerX
          val cy = asFloat(spec["y"]) ?: element.centerY
          val r = asFloat(spec["radius"]) ?: element.radius
          val fromDeg = asFloat(spec["angleFromDeg"]) ?: element.angleFromDeg
          val toDeg = asFloat(spec["angleToDeg"]) ?: element.angleToDeg
          element.setArcInfo(cx, cy, r, fromDeg, toDeg)
        }
      }
      "ellipse" -> {
        if (element is Ellipse) {
          val cx = asFloat(spec["x"]) ?: element.centerX
          val cy = asFloat(spec["y"]) ?: element.centerY
          val r = asFloat(spec["radiusX"]) ?: asFloat(spec["radius"]) ?: element.radiusX
          element.setEllipseInfo(cx, cy, r)
        }
      }
      "polygon" -> {
        if (element is Polygon) {
          val pts = asPoints(spec["points"])
          if (pts.isNotEmpty()) {
            element.clear()
            for ((px, py) in pts) {
              element.addPoint(px, py)
            }
          }
        }
      }
      "path" -> {
        if (element is Path) {
          val pts = asPoints(spec["points"])
          if (pts.isNotEmpty()) {
            element.clear()
            pts.forEachIndexed { i, (px, py) ->
              if (i == 0) element.moveTo(px, py) else element.lineTo(px, py)
            }
            if (asBool(spec["closed"]) == true) {
              element.close()
            }
          }
        }
      }
      "image" -> {
        if (element is Image) {
          asString(spec["resource"])?.let { res ->
            val slot = mapImageSlot(asString(spec["slot"]))
            element.setResource(ImgSrc(res, slot))
          }
        }
      }
    }
  }
}
