#include<iostream>



// ��main_*() ��Ϊmain()������
int main_arrayNew(){
	
	using namespace std;
	double* p3 = new double[3];	
	p3[0] = 0.1;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[0] << ".\n";
	p3 += 1;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3ָ������ԭp3[1]��ʼ�����0.5
	p3 += 1;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3ָ������ԭp3[2]��ʼ�����0.8

	p3 -= 2;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3ָ�����ص��ʼ�����0.1
	
	delete[] p3;		//�ͷ��ڴ�



	return 0;
}