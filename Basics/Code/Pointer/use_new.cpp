#include<iostream>


// ���а�main_*() ��Ϊmain()
int main_use_new() {
	using namespace std;

	int nights = 1001;
	int* pt = new int;		//��ָ�����һ�������ڴ�
	*pt = 1001;				//��ָ���ַ�洢һ��ֵ

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;

	cout << "\n int ";
	cout<<"value = "<<*pt<< ": location " << pt << endl;
	
	cout << sizeof(pt) << "\n";
	cout << sizeof(*pt) << "\n";

	return 0;
}