// main.cpp — runs console probe first, then opens the GUI animation lab.
// Copyright (c) 2025 Curtis Edwards (DoDoBar)
// Originated: May 2025


#include <Animation/Animation.h>

using namespace Upp;

#include "ConsoleAnim.h"

CONSOLE_APP_MAIN
{
    bool ok = ConsoleAnim::RunProbe();
    SetExitCode(ok ? 0 : 1);
} 
