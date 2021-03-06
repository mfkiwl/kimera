#ifndef LOOPBACK_H
#define LOOPBACK_H

#include "kimera/state.hpp"

#if	  defined(KIMERA_LINUX)
#include "kimera/loopback/linux.hpp"
#elif defined(KIMERA_MACOS)
#include "kimera/loopback/macos/loopback.hpp"
#elif defined(KIMERA_WINDOWS)
#include "kimera/loopback/windows.hpp"
#endif

#endif
