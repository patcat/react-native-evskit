package expo.modules.evskit

import UIKit.app.Screen
import UIKit.app.data.TouchDirection
import UIKit.widgets.UIElement

class EvsDeclarativeScreen(
  val screenId: String,
  width: Float,
  height: Float
) : Screen(width, height) {

  private data class ActiveEntry(val type: String, val element: UIElement)
  private val activeElements = mutableMapOf<String, ActiveEntry>()
  var onTouchHandler: ((String, TouchDirection) -> Unit)? = null

  fun syncElements(specs: List<Map<String, Any?>>) {
    val newKeys = mutableSetOf<String>()

    for (spec in specs) {
      val key = spec["key"] as? String ?: continue
      val type = spec["type"] as? String ?: continue
      newKeys.add(key)

      val current = activeElements[key]
      if (current != null && current.type == type) {
        EvsElementAdapter.update(current.element, type, spec)
      } else {
        if (current != null) {
          remove(current.element)
        }
        val element = EvsElementAdapter.create(type, spec)
        if (element != null) {
          add(element)
          activeElements[key] = ActiveEntry(type, element)
        }
      }
    }

    val removedKeys = activeElements.keys.filter { !newKeys.contains(it) }
    for (key in removedKeys) {
      activeElements[key]?.let { remove(it.element) }
      activeElements.remove(key)
    }
  }

  override fun onTouch(touch: TouchDirection): Boolean {
    onTouchHandler?.invoke(screenId, touch)
    return true
  }
}
