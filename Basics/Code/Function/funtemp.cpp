// funtemp.cpp -- 使用函数模板

#include<iostream>

template <typename T>	// 或者 class T
void Swap(T& a, T& b);


// 把main_*() 改为main()再运行
int main_funtemp() {

	using namespace std;

	int wallet1 = 300;
	int wallet2 = 500;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	
	Swap(wallet1, wallet2);
	cout << "使用交换函数模板后:\n";
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	double price1 = 8.8;
	double price2 = 66;
	cout << "price1 = $" << price1;
	cout << " price2 = $" << price2 << endl;

	Swap(price1, price2);
	cout << "使用交换函数模板后:\n";
	cout << "price1 = $" << price1;
	cout << " price2 = $" << price2 << endl;


	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}