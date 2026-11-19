import Foundation
import NativeEvsKit

public class EvsDeclarativeScreen: Screen {
  public let screenId: String
  private var activeElements: [String: (type: String, element: UIElement)] = [:]
  public var onTouchHandler: ((String, TouchDirection) -> Void)?

  public init(id: String, width: Float, height: Float) {
    self.screenId = id
    super.init(screenWidth: width, screenHeight: height)
  }

  public func syncElements(specs: [[String: Any]]) {
    var newKeys = Set<String>()

    for spec in specs {
      guard let key = spec["key"] as? String,
            let type = spec["type"] as? String else { continue }
      newKeys.insert(key)

      if let current = activeElements[key], current.type == type {
        // In-place update of properties on live element
        EvsElementAdapter.update(element: current.element, type: type, spec: spec)
      } else {
        // Remove previous element if type changed
        if let current = activeElements[key] {
          self.remove(uiElement: current.element)
        }
        // Create new element and add to screen
        if let element = EvsElementAdapter.create(type: type, spec: spec) {
          self.add(uiElement: element)
          activeElements[key] = (type: type, element: element)
        }
      }
    }

    // Remove elements that are no longer in the spec
    let removedKeys = activeElements.keys.filter { !newKeys.contains($0) }
    for key in removedKeys {
      if let current = activeElements[key] {
        self.remove(uiElement: current.element)
        activeElements.removeValue(forKey: key)
      }
    }
  }

  override public func onTouch(touchDirection: TouchDirection) -> Bool {
    onTouchHandler?(screenId, touchDirection)
    return true
  }
}
