#include<iostream>

//����һ����������
inline double square(double x) { return x * x; }

// ��main_*() ��Ϊmain()������
int main_inline() {
	
	using namespace std;
	double a, b;
	a = square(5.0);
	b = square(1.2 + 0.8);

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";



	return 0;
}