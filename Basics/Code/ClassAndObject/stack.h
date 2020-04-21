// stack.h -- stack�����������͵��ඨ��

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack 
{

private:
	enum {MAX = 10};
	Item items[MAX];
	int top;

public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
	void show();
};

#endif // !STACK_H_
