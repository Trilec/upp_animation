topic "Copyright (c) 2025 Curtis Edwards (DoDoBar). Originated May 2025. Value helpersAnimateValue and its Color and Rect wrappers create, start, and return a live Animation that updates a value every frame.";
[ $$0,0#00000000000000000000000000000000:Default]
[{_ [s0; AnimateColor and AnimateRect are concise wrappers for the most common UI transitions. AnimateValue<T> supports Color, Point, Size, Rect, and arithmetic-like value types accepted by the interpolation expression.]

[s0; Example:]
[s0; Animation move = AnimateRect(ctrl, callback([&](const Rect& r) { ctrl.SetRect(r); }), from, to, 250, Easing::OutCubic());]

[s0; The returned object owns the animation handle, while the scheduler owns the live state. Keep the returned Animation alive for as long as you need to cancel, inspect, or replay it.]]
