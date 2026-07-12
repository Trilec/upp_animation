Copyright (c) 2025 Curtis Edwards (DoDoBar)
Originated: May 2025

Version 1.0.1 notes

This documentation describes the first released API line for the renamed
Animation package. The old repository/package name is not part of the public
API. Easing remains the intentional namespace name because easing is a feature
of the Animation library, not a separate package.

Important 1.0.1 behavior:

- Loop(-1) is infinite; finite Loop values represent complete cycles.
- With Yoyo(true), each cycle consists of a forward and reverse leg.
- Progress() is normalized time, independent of easing.
- Cancel() preserves its forward progress snapshot; KillAllFor() forces 0.
- Finalize() is explicit shutdown support and is normally called after owned
  Animation objects have been destroyed.
