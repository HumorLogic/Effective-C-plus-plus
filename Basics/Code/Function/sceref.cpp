#include<iostream>


// 把main_*() 改为main()再运行
int main_sceref() {

	using namespace std;

	int rats = 101;
	int& rodents = rats;		//rodents是一个引用变量

	cout << "rats = " << rats;
	cout << " , rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;		//能否改变引用？

	cout << "bunnies = " <<bunnies;
	cout << " , rats = " << rats;
	cout << " , rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies << "\n";
	cout << "rats address = " << &rats << "\n";
	cout << "rodents address = " << &rodents << endl;

	return 0;
}