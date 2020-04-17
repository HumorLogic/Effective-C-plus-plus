#include<iostream>


static double num_static = 10;
double num = 10;
// 把main_*() 改为main()再运行
int main_mem() {

	using namespace std;
	register	double num_auto = 10;
	register	double num_auto2 = 1666;
	cout << "num address: \t" << (int)&num << "\n";
	cout << "num_static address: \t" << (int)&num_static << "\n";
	cout << "num_auto address: \t" << (int)&num_auto << "\n";
	cout << "num_auto2 address: \t" << (int)&num_auto2 << endl;


	return 0;
}