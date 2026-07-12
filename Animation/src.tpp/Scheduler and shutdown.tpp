topic "Copyright (c) 2025 Curtis Edwards (DoDoBar). Originated May 2025. Scheduler and shutdownThe package uses one shared scheduler for all Animation instances. It is normally driven by TimeCallback and may also be advanced manually for deterministic tests.";
[ $$0,0#00000000000000000000000000000000:Default]
[{_ [s0; Animation::SetFPS clamps the target rate to 1..240 Hz. Animation::Tick and TickOnce manually advance scheduled states and are intended for diagnostics, tests, and headless applications.]

[s0; Animation::KillAllFor(ctrl) aborts all states targeting one control. Owner destruction is watched through U++ Ptr and automatically stops the associated state.]

[s0; During explicit shutdown, destroy owned Animation objects first, then call Animation::Finalize(). Finalize stops the timer, severs back-pointers, and releases remaining scheduler states.]]
