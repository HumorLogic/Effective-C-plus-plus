﻿# CMakeList.txt: Cplusplus 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("Cplusplus")

# 将源代码添加到此项目的可执行文件。
add_executable (Cplusplus "Cplusplus.cpp" "Cplusplus.h" "Hello.cpp" "Basic/class/Rectangle.cpp" "Basic/class/Stock.h" "Basic/class/Stock.cpp")

# TODO: 如有需要，请添加测试并安装目标。
