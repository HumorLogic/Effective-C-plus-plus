#include<iostream>
#include<vector>


// 把main_*() 改为main()再运行
int main() {
	using namespace std;
	//创建一个存储 int类型的vector对象
	vector<int> vec;
	int i;
	//显示vec的初始大小
	cout << "vector 大小 = " << vec.size() << endl;

	//存进5个值
	for ( i = 0; i < 5; i++)
	{
		vec.push_back(i);
	}

	//显示vec的大小
	cout << "扩大的 vector 大小 = " << vec.size() << endl;

	// 输出里面的值
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// 使用迭代器访问vec的值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	return 0;
}