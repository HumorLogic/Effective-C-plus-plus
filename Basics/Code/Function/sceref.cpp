#include<iostream>


// ��main_*() ��Ϊmain()������
int main_sceref() {

	using namespace std;

	int rats = 101;
	int& rodents = rats;		//rodents��һ�����ñ���

	cout << "rats = " << rats;
	cout << " , rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;		//�ܷ�ı����ã�

	cout << "bunnies = " <<bunnies;
	cout << " , rats = " << rats;
	cout << " , rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies << "\n";
	cout << "rats address = " << &rats << "\n";
	cout << "rodents address = " << &rodents << endl;

	return 0;
}