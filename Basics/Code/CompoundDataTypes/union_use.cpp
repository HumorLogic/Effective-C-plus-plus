#include<iostream>


// ��main_*() ��Ϊmain()������
int main() {

	using namespace std;
	union one4all {
		int int_val;
		long long_val;
		double double_val;
	};

	one4all pail;
	pail.double_val = 18.88;		//�洢Ϊdouble����
	cout << pail.double_val<<"\n";

	pail.int_val = 15;					//�洢Ϊint���ͣ�doubleֵ��ʧ
	cout << pail.int_val << endl;
	return 0;
}