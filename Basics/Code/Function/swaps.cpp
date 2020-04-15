#include<iostream>

void swapr(int& a, int& b);		//引用传递法



// 把main_*() 改为main()再运行
int main() {

	using namespace std;

	int wallet1 = 300;
	int wallet2 = 500;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;



	return 0;
}

void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
