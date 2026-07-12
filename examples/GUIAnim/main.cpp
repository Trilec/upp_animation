// main.cpp — runs GUI animation lab demo/tests.
// Copyright (c) 2025 Curtis Edwards (DoDoBar)
// Originated: May 2025

#include <CtrlLib/CtrlLib.h>
#include <Animation/Animation.h>

using namespace Upp;

#include "GUIAnim.h"

GUI_APP_MAIN
{

    Animation::SetFPS(30);            // optional: make pacing explicit
    GUIAnim::RunLab();                // interactive lab; close window to exit
}
