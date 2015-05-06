// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

namespace HLE {

extern bool g_reschedule;   ///< If true, immediately reschedules the CPU to a new thread

void Reschedule(const char *reason);

void Init();
void Shutdown();

} // namespace
