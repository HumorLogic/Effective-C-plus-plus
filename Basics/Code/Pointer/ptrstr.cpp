#include<iostream>
#include<cstring>


// 把main_*() 改为main()再运行
int main_ptrstr() {

	using namespace std;


	char animal[20] = "duck";		
	const char* bird = "dove";	
	char* ps;								//未初始化
	cout << animal << "\n";		//输出：duck
	cout << bird << "\n";			//输出：dove

	cout << "请输入一种动物：";
	cin >> animal;

	ps = animal;		//设置ps指向字符串类型

	cout << ps << "!\n";
	cout <<"使用strcpy()之前：" << "\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];	//分配新空间
	strcpy(ps, animal);							// 复制字符串到新空间
	
	cout << "使用strcpy()之后：" << "\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	
	cout << "-----------animal-------------" << "\n";
	cout << &animal << endl;
	cout << (int*)animal<< endl;

	cout << "-------------ps---------------" << "\n";
	cout << &ps << endl;
	cout << (int*)ps<< endl;
	
	cout << "----------int array------------" << "\n";

	int arr[] = { 0,8,8,9,9 };
	cout << arr << endl;
	cout << &arr << endl;
	cout << (int*)arr << endl;
	cout << &(arr[0]) << endl;
	cout << &(arr[1]) << endl;


	return 0;
}