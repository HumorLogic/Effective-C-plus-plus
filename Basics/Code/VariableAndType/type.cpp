#include<iostream>


// ��main_*() ��Ϊmain()������
int main_type() {

	using namespace std;
	cout << "���ͣ�\t\t" << "-------------------size-------------------" << endl;

	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t��ֵСֵ��" << (numeric_limits<bool>::min)() << endl;

	cout << "short \t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t��ֵСֵ��" << (numeric_limits<short>::min)() << endl;

	cout << "unsigned short \t" << "��ռ�ֽ�����" << sizeof(unsigned short);
	cout << "\t���ֵ��" << (numeric_limits<unsigned short>::max)();
	cout << "\t��ֵСֵ��" << (numeric_limits<unsigned short>::min)() << endl;

	cout << "long long \t" << "��ռ�ֽ�����" << sizeof(long long);
	cout << "\t���ֵ��" << (numeric_limits<long long>::max)();
	cout << "\t��ֵСֵ��" << (numeric_limits<long long>::min)() << endl;

	cout << "double \t \t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��ֵСֵ��" << (numeric_limits<double>::min)() << endl;

	int my;
	auto myNum = 100.1;
	auto num = 1;
	cout << &my << endl;

	return 0;
}