#include<iostream>


// 把main_*() 改为main()再运行
int main_type() {

	using namespace std;
	cout << "类型：\t\t" << "-------------------size-------------------" << endl;

	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t最值小值：" << (numeric_limits<bool>::min)() << endl;

	cout << "short \t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t最值小值：" << (numeric_limits<short>::min)() << endl;

	cout << "unsigned short \t" << "所占字节数：" << sizeof(unsigned short);
	cout << "\t最大值：" << (numeric_limits<unsigned short>::max)();
	cout << "\t最值小值：" << (numeric_limits<unsigned short>::min)() << endl;

	cout << "long long \t" << "所占字节数：" << sizeof(long long);
	cout << "\t最大值：" << (numeric_limits<long long>::max)();
	cout << "\t最值小值：" << (numeric_limits<long long>::min)() << endl;

	cout << "double \t \t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最值小值：" << (numeric_limits<double>::min)() << endl;

	int my;
	auto myNum = 100.1;
	auto num = 1;
	cout << &my << endl;

	return 0;
}