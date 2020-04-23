// stacker.cpp -- 测试 Stack 类
#include <iostream>
#include <cctype>
#include "stack.h"

// 把main_*() 改为main()再运行
int main_stacker() {

	using namespace std;
	Stack st;		// 创建一个空栈
	char ch;
	unsigned long po;

	po = 666;
	st.push(po);
	st.push(888);
	st.show();
	st.pop(po);
	st.show();


	cout << "按下A键添加一个订购订单，\n"
		<< " P 键处理一个PO 或者 Q 键退出。\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a': cout << "Enter a PO number to add: ";
			cin >> po;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p': if (st.isempty())
			cout << "stack already empty\n";
				else {
			st.pop(po);
			cout << "PO #" << po << " popped\n";
		}
				break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}


	cout << "Bye\n";

	return 0;
}