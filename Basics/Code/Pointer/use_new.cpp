#include<iostream>


// 运行把main_*() 改为main()
int main_use_new() {
	using namespace std;

	int nights = 1001;
	int* pt = new int;		//给指针分配一个整型内存
	*pt = 1001;				//在指针地址存储一个值

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;

	cout << "\n int ";
	cout<<"value = "<<*pt<< ": location " << pt << endl;
	
	cout << sizeof(pt) << "\n";
	cout << sizeof(*pt) << "\n";

	return 0;
}