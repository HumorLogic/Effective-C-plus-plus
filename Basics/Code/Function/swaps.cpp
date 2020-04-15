#include<iostream>

void swapr(int& a, int& b);		//引用传递法
void swapp(int* p, int* q);			//指针法


// 把main_*() 改为main()再运行
int main_swaps() {

	using namespace std;

	int wallet1 = 300;
	int wallet2 = 500;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "使用引用交换内容:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "使用指针交换内容:\n";
	swapp(&wallet1, &wallet2);

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

void swapp(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
}
