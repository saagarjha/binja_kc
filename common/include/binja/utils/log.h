// Copyright (c) skr0x1c0 2022.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#pragma once

#include <binaryninjaapi.h>
#include <fmt/format.h>
#include <fmt/std.h>

#define BDLogDebug(...)                                                                  \
    do {                                                                                 \
        auto msg = fmt::format(__VA_ARGS__);                                             \
        BinaryNinja::LogDebug("binja_dwarf: %s:%d %s", __FILE__, __LINE__, msg.c_str()); \
    } while (0)

#define BDLogWarn(...)                                                                  \
    do {                                                                                \
        auto msg = fmt::format(__VA_ARGS__);                                            \
        BinaryNinja::LogWarn("binja_dwarf: %s:%d %s", __FILE__, __LINE__, msg.c_str()); \
    } while (0)

#define BDLogInfo(...)                                                                  \
    do {                                                                                \
        auto msg = fmt::format(__VA_ARGS__);                                            \
        BinaryNinja::LogInfo("binja_dwarf: %s:%d %s", __FILE__, __LINE__, msg.c_str()); \
    } while (0)

#define BDLogError(...)                                                                  \
    do {                                                                                 \
        auto msg = fmt::format(__VA_ARGS__);                                             \
        BinaryNinja::LogError("binja_dwarf: %s:%d %s", __FILE__, __LINE__, msg.c_str()); \
    } while (0)
