Copyright (c) 2025 Curtis Edwards (DoDoBar)
Originated: May 2025

Easing and interpolation

Easing functions transform normalized time into the value delivered to the
per-frame callback. Progress() deliberately reports un-eased time, so it is
safe to use for progress indicators and diagnostics regardless of the selected
curve.

The built-in presets are CSS-style cubic-Bezier curves. They are useful UI
approximations, not physics simulations. OutBounce is implemented as a
piecewise bounce curve. For a project-specific motion language, use:

    auto gentle = Easing::Bezier(0.25, 0.1, 0.25, 1.0);
    animation.Ease(gentle);

AnimateValue<T> interpolates Color, Point, Size, Rect, and arithmetic-like
types. The setter is called once per frame and the owning control is refreshed
by the helper. Use AnimateColor or AnimateRect when their explicit signatures
make application code clearer.
