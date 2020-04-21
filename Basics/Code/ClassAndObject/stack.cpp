// stack.cpp -- Stack 成员函数定义
#include "stack.h"
#include <iostream>

Stack::Stack()		//创建一个空栈
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item& item)
{
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else return false;
}

bool Stack::pop(Item& item)
{
	if (top > 0) {
		item = items[--top];
		return true;
	}
	else return false;
}

void Stack::show()
{
	for (int i = 0; i < top; i++)
	{
		std::cout << items[i] << ", ";
	}
	std::cout<<std::endl;
}
