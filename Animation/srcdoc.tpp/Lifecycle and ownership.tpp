Copyright (c) 2025 Curtis Edwards (DoDoBar)
Originated: May 2025

Lifecycle and ownership

The fluent setters describe the next run. Play consumes that staged recipe and
creates a scheduled state. The state is independent of later setter changes,
which makes a running animation deterministic.

Play() on an active object silently replaces the current run. Replay() is the
named form for intentionally restarting the last committed recipe. Cancel()
fires OnCancel and retains a forward progress snapshot. Reset() cancels silently,
clears Progress(), and primes a fresh recipe.

Pause() and Resume() are reversible. Stop() completes the run and fires
OnFinish, but not OnCancel. A callback may cancel or start another animation;
the scheduler defers unsafe list mutations until it is safe to remove state.

The scheduler owns live states. Animation owns its handle, and Ctrl ownership is
observed through U++ watcher semantics. This separation is why an Animation
should be stored in a member or One<> when it must outlive the current scope.
