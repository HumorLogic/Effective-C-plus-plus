# CMakeList.txt: Code 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("Code")


# 将源代码添加到此项目的可执行文件。
add_executable (Code "Code.cpp" "Code.h" "Pointer/use_new.cpp" "Pointer/arraynew.cpp" 
"空模板.cpp" "Pointer/ptrstr.cpp" "Pointer/newstrct.cpp" "Pointer/delete.cpp" "Function/fun_ptr.cpp"
"Function/inline.cpp" "Function/sceref.cpp" "Function/swaps.cpp" "Function/funtemp.cpp" "Function/tempover.cpp" 
"MemoryModelAndNameSpace/autoscp.cpp" "MemoryModelAndNameSpace/memory_model.cpp" 
"MemoryModelAndNameSpace/file1.cpp" "MemoryModelAndNameSpace/file2.cpp" 
"MemoryModelAndNameSpace/external.cpp" "MemoryModelAndNameSpace/support.cpp" 
"MemoryModelAndNameSpace/twofile1.cpp" "MemoryModelAndNameSpace/twofile2.cpp" 
"MemoryModelAndNameSpace/static.cpp" "VariableAndType/type.cpp" "Operator/arith.cpp" 
"Operator/assign.cpp" "VariableAndType/bondini.cpp" "VariableAndType/chartype.cpp" 
"Operator/divide.cpp" "VariableAndType/exceed.cpp" "VariableAndType/floatnum.cpp" 
"VariableAndType/fltadd.cpp" "VariableAndType/hexoct1.cpp" "VariableAndType/hexoct2.cpp" 
"VariableAndType/init.cpp" "VariableAndType/limits.cpp" "Operator/modulus.cpp" 
"VariableAndType/morechar.cpp" "Operator/typecast.cpp" "CompoundDataTypes/structur.cpp" 
"CompoundDataTypes/arrstruct.cpp" "CompoundDataTypes/union_use.cpp" "CompoundDataTypes/enum_use.cpp"
"CompoundDataTypes/string.cpp" "CompoundDataTypes/instr1.cpp" "CompoundDataTypes/instr2.cpp"
"CompoundDataTypes/strtype1.cpp" "CompoundDataTypes/strtype2.cpp" "CompoundDataTypes/strtype3.cpp"
"CompoundDataTypes/strtype4.cpp" "ClassAndObject/stack.cpp" "ClassAndObject/stacker.cpp" "Template/stacktem.cpp" 
"Template/stckoptr1.cpp" "STL/smrtptrs.cpp" "STL/vector.cpp" "STL/vect1.cpp"   "STL/vect3.cpp"  "STL/list.cpp" "STL/inserts.cpp")

# TODO: 如有需要，请添加测试并安装目标。
