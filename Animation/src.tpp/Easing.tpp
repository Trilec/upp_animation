topic "Copyright (c) 2025 Curtis Edwards (DoDoBar). Originated May 2025. EasingEasing contains CSS-style cubic-Bezier presets and the Bezier factory used by Animation::Ease(). Presets return callable functions accepting normalized time in [0, 1].";
[ $$0,0#00000000000000000000000000000000:Default]
[{_ [s0; Use a preset: animation.Ease(Easing::OutCubic());]

[s0; Build a custom curve: animation.Ease(Easing::Bezier(0.25, 0.1, 0.25, 1.0));]

[s0; Presets are available for Linear, Quad, Cubic, Quart, Quint, Sine, Expo, and Elastic families, plus OutBounce. The polynomial and named elastic presets are cubic-Bezier approximations; OutBounce is a piecewise bounce curve because a single Bezier segment cannot represent multiple impacts.]

[s0; The callback value is eased progress. Animation::Progress() remains time-normalized and is independent of the easing curve.]]
