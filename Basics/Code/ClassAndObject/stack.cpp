// stack.cpp -- Stack ��Ա��������
#include "stack.h"
#include <iostream>

Stack::Stack()		//����һ����ջ
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
