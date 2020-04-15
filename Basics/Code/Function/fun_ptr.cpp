//fun_ptr.cpp -- 函数指针示例
#include<iostream>

using namespace std;

double pam(int);
double betsy(int);
void Print(string);

void estimate(int lines, double (*pf)(int));


// 把main_*() 改为main()再运行
int main_funptr() {
	/*void (*pf)(string);
	pf = Print;
	pf("你好");
	(*pf)("世界");
	cout << Print << endl;
	Print("Hello World");*/

	int code;
	cout << "你需要多少行代码？";
	cin >> code;
	cout << "这是 Besty的估计：\n";
	estimate(code, betsy);
	cout << "这是 Pam的估计：\n";
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
	cout << lines << " 行代码需要花费：";
	cout << (*pf)(lines) << "h\n";
}
