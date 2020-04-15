#include<iostream>

struct inflatable	// 结构体定义
{
	char name[20];
	float volume;
	double price;

};


// 把main_*() 改为main()再运行
int main_newstrct() {

	using namespace std;
	inflatable* ps = new inflatable;		//分配内存给结构体

	cout << "输入可充气物品的名称：";
	cin.get(ps->name, 20);					//方法1 进入数据
	cout << "输入物品体积，单位立方英尺：";
	cin >> (*ps).volume;						//方法2 进入数据
	cout << "输入价格：￥";
	cin >> ps->price;

	cout << "名称: " << (*ps).name << endl;			//方法2 访问数据
	cout << "体积: " << ps->volume << endl;		//方法1 访问数据
	cout << "价格: ￥" << ps->price << endl;		//方法1 访问数据


	delete ps;

	return 0;
}