#include<iostream>

void swapr(int& a, int& b);		//���ô��ݷ�
void swapp(int* p, int* q);			//ָ�뷨


// ��main_*() ��Ϊmain()������
int main_swaps() {

	using namespace std;

	int wallet1 = 300;
	int wallet2 = 500;

	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "ʹ�����ý�������:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "ʹ��ָ�뽻������:\n";
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
