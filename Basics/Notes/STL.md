# STL

**目录**
1. [【STL介绍】](#intro)
2. [【容器】](#container)
3. [【迭代器】](#iterator)
4. [【算法】](#algorithm)

------------

## 1. STL(标模板库准)介绍
STL提供了一组表示容器、迭代器、函数对象和算法的模板。STL使得能够构造各种容器（包括数组、队列和链表）和执行各种操作（包括搜索、排序和随机排列）。
- **容器** —— 是一个与数组类似的单元，可以存储若干个值。STL容器是同质，即存储的值的类型相同。
- **算法** —— 是完成特定任务（如对数组进行排序或在链表中查找特定值）的方法。
- **迭代器** —— 能够用来遍历容器的对象，与能够遍历数组的指针类似，是广义指针。
- **函数对象** —— 是类似于函数的对象，可以是类对象或函数指针（包括函数名，因为函数名被用作指针）。  

下面以模板类`vector`的使用对STL有一个基本认识。
```C++
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
```

---------
<a id="container"></a>
## 2. 容器Containers

