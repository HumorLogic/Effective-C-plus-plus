#include<iostream>

//声明一个内联函数
inline double square(double x) { return x * x; }

// 把main_*() 改为main()再运行
int main_inline() {
	
	using namespace std;
	double a, b;
	a = square(5.0);
	b = square(1.2 + 0.8);

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";



	return 0;
}