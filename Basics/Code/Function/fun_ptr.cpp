//fun_ptr.cpp -- ����ָ��ʾ��
#include<iostream>

using namespace std;

double pam(int);
double betsy(int);
void Print(string);

void estimate(int lines, double (*pf)(int));


// ��main_*() ��Ϊmain()������
int main_funptr() {
	/*void (*pf)(string);
	pf = Print;
	pf("���");
	(*pf)("����");
	cout << Print << endl;
	Print("Hello World");*/

	int code;
	cout << "����Ҫ�����д��룿";
	cin >> code;
	cout << "���� Besty�Ĺ��ƣ�\n";
	estimate(code, betsy);
	cout << "���� Pam�Ĺ��ƣ�\n";
	estimate(code, pam);



	return 0;
}

double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

double betsy(int lns)
{
	return 0.05 * lns;
}

void Print(string str) {
	cout << str<<"\n";
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << " �д�����Ҫ���ѣ�";
	cout << (*pf)(lines) << "h\n";
}
