Copyright (c) 2025 Curtis Edwards (DoDoBar)
Originated: May 2025

Getting started

Animation is a small U++ package. Add the repository root to the application's
package nests and add Animation as a package dependency. Include:

    #include <Animation/Animation.h>

An animation is bound to a Ctrl. The owner is watched, so an animation does not
continue to call into a destroyed control.

    Animation slide(button);
    slide.Duration(250)
         .Ease(Easing::OutCubic())
         ([&](double eased) {
             button.SetRect(40 + int(120 * eased), 40, 100, 40);
             return true;
         })
         .OnFinish([&] { /* optional completion work */ })
         .Play();

Keep the Animation object alive while the run is active. A One<Animation> is a
convenient choice for controls that replace or cancel animations dynamically.
