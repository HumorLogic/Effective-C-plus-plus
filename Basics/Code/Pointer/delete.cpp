#include<iostream>
#include<cstring>

using namespace std;
char* getname(void);

// 把main_*() 改为main()再运行
int main_delete() {

	char* name;					//创建一个空字符指针
	name = getname();		//分配字符串地址给name指针
	cout << name << " \t at " << (int*)name << "\n";
	delete [] name;				//释放内存

	name = getname();
	cout << name << "\t at " << (int*)name << "\n";
	delete[] name;

	return 0;
}

char* getname()
{
	char temp[80];											//临时存储
	cout << "Enter last name: ";
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);										//复制字符串到更小的空间

	return pn;													// 函数运行结束时临时变量temp消失
}
