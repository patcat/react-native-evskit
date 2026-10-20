import NativeEvsKit

/// Generic app-owned screen registry.
///
/// The bridge itself ships NO Screen subclasses. Each app registers its own
/// Swift `Screen`/`FullScreen`/`ArScreen` subclasses under a string id, then
/// drives them from JS via `EvsScreens.show(id)`.
///
/// App screens live in app source (e.g. `<app>/evs-screens/ios/*.swift`),
/// linked into the app target at prebuild by the `screens` config-plugin
/// option — so wiping `ios/` and re-running `expo prebuild` loses nothing.
public enum EvsScreenRegistry {
  public static var factories: [String: () -> Viewport] = [:]

  public static func register(id: String, factory: @escaping () -> Viewport) {
    factories[id] = factory
  }

  public static func unregister(id: String) {
    factories.removeValue(forKey: id)
  }

  public static func make(id: String) -> Viewport? {
    factories[id]?()
  }
}
