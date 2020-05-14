# CMakeList.txt: Code 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("Code")

# 将源代码添加到此项目的可执行文件。
add_executable (Code "Code.cpp" "Code.h"  "Multithreding/mutex_use.cpp" "Multithreding/future/async_use.cpp" "空模板.cpp")

# TODO: 如有需要，请添加测试并安装目标。
