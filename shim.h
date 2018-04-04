//
//  shim.h
//  WIn32Test
//
//  Created by Yury Vovk on 04.04.2018.
//  Copyright © 2018 gungravekoga. All rights reserved.
//

#ifndef _WIN64
#include "_windows.h"
#else
#define WINVER 0x0601
#define _WIN32_WINNT 0x0601
# ifdef __MINGW32__
#  include <_mingw.h>
#  ifdef __MINGW64_VERSION_MAJOR
#   include <winsock2.h>
#  endif
# endif
# include <windows.h>
# include <ws2tcpip.h>
#endif
