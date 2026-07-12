Copyright (c) 2025 Curtis Edwards (DoDoBar)
Originated: May 2025

Testing and examples

ConsoleAnim is the deterministic regression probe. It covers construction,
owner destruction, concurrent runs, delay, pause/resume, looping and yoyo,
callbacks, exceptions, re-entrant starts, FPS changes, Finalize, replay,
move-returned helpers, and replacing an active run.

It advances the scheduler with Animation::TickOnce() and uses a plain Ctrl as an
owner, so it does not require an opened window. This makes it suitable for local
regression checks and CI-style runs.

GUIAnim is the interactive laboratory. It exposes playback controls, a curve
editor, multiple animation scenarios, and the easing preset list. It is the
best starting point for understanding how the callback value affects a visual
control.

Both examples include the package as <Animation/Animation.h>. The console probe
performs explicit shutdown in the required order: owned animations are cleared,
then Animation::Finalize() is called.
