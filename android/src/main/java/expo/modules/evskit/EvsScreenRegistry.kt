package expo.modules.evskit

import UIKit.app.Viewport

/**
 * Generic app-owned screen registry.
 *
 * The bridge itself ships NO Screen subclasses. Each app registers its own
 * Kotlin `Screen`/`FullScreen`/`ArScreen` subclasses under a string id
 * (from app-owned sources linked at prebuild by the `screens` plugin
 * option), then drives them from JS via `EvsScreens.show(id)`.
 */
object EvsScreenRegistry {
  private val factories = mutableMapOf<String, () -> Viewport>()

  fun register(id: String, factory: () -> Viewport) {
    factories[id] = factory
  }

  fun unregister(id: String) {
    factories.remove(id)
  }

  fun make(id: String): Viewport? = factories[id]?.invoke()
}
