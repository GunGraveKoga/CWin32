//
//  _windows.c
//  WIn32Test
//
//  Created by Yury Vovk on 04.04.2018.
//  Copyright © 2018 gungravekoga. All rights reserved.
//
/*
 Generate header with command:
 clang --target=x86_64-w64-mingw32 -I/usr/local/opt/mingw-w64/toolchain-x86_64/x86_64-w64-mingw32/include -x c -dD -P -E ~/CWin32/_windows.c > ~/CWin32/_windows.h
 */
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
