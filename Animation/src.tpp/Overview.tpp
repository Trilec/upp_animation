topic "Copyright (c) 2025 Curtis Edwards (DoDoBar). Originated May 2025. Animation OverviewThe Animation package provides single-threaded, control-bound animations for U++.It combines a scheduler, lifecycle-safe Animation objects, cubic-Bezier easing presets, and helpers for animating common U++ values.Version 1.0.1 focuses on a small fluent API with explicit ownership and deterministic test support.";
[ $$0,0#00000000000000000000000000000000:Default]
[{_ [s0; Animation is designed to sit beside CtrlCore/CtrlLib in an U++ package nest. Include <Animation/Animation.h>, construct an Animation with its owning Ctrl, configure the next run with the fluent setters, and call Play(). The scheduler runs through a shared TimeCallback.]

[s0; The package includes:]
[* [s0; Animation lifecycle: Play, Pause, Resume, Stop, Cancel, Reset, and Replay.]
[* [s0; Easing presets and custom cubic-Bezier curves in the Easing namespace.]
[* [s0; AnimateValue, AnimateColor, and AnimateRect convenience helpers.]
[* [s0; Console and GUI examples under examples/.]]]
