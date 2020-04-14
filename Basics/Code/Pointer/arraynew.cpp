#include<iostream>



// 把main_*() 改为main()再运行
int main_arrayNew(){
	
	using namespace std;
	double* p3 = new double[3];	
	p3[0] = 0.1;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[0] << ".\n";
	p3 += 1;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3指针起点从原p3[1]开始，输出0.5
	p3 += 1;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3指针起点从原p3[2]开始，输出0.8

	p3 -= 2;
	cout << "p3[1] is " << p3[0] << ".\n";		//p3指针起点回到最开始，输出0.1
	
	delete[] p3;		//释放内存



	return 0;
}