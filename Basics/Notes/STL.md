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

## 泛型编程
STL是一种泛型编程（generic programming）。面向对象编程关注的式编程的数据方面，而泛型编程关注的是算法。他们之间的共同点是抽象和创建可重用代码，但理念决然不同。  
泛型编程旨在编写独立于数据类型的代码。在C++中，完成通用程序的工具是模板。当然模板使得能够按照泛型定义函数或类，而STL通过通用算法更进了一步。

## 3. 迭代器Iterator

理解迭代器是理解STL的关键所在。模板使得算法独立于存储的数据类型，而迭代器使算法独立于使用的容器类型。因此他们都是STL通用方法的重要组成部分。 

### 3.1 迭代器使用
使用容器时，无需知道其迭代器是如何实现的，也无需知道超尾是如何实现的，而只需要知道他有迭代器，其`begin()`返回一个指向第一个元素的迭代器，`end()`返回一个指向超尾位置的迭代器即可。  
例：打印`vector<double>`对象中的值：  
```C++
vector<double>::iterator pr;	//声明一个vector<double>类型的迭代器
for(pr=socres.begin();pr!=scores.end();pr++)
	cout<<*pr<<endl;

```
如果使用`list<double>`类模板来存储分数，代码如下：
```C++
list<double>::iterator pr;	//声明一个list<double>类型的迭代器
for(pr=socres.begin();pr!=scores.end();pr++)
	cout<<*pr<<endl;
```

使用C++11新增的自动类型推断可以进一步简化：对矢量vector或列表list都可以用如下代码：  
```C++
for(auto pr=socres.begin();pr!=scores.end();pr++)
	cout<<*pr<<endl;
```
>实际上，作为一种编程风格应避免直接使用迭代器，而应尽可能的使用STL函数（如for_each）来处理细节。

### 3.2 迭代器类型
不同的算法对迭代器的要求也不同。例如查找算法和排序算法。STL定义了5种迭代器。

<table>
<tr><th width="100">类型</th><th width="200">描述</th></tr>
<tr><td>输入迭代器</td><td>必须能否访问容器中所有的值</td></tr>
<tr><td>输出迭代器</td><td>程序可以修改容器的值而不能读取</td></tr>
<tr><td>正向迭代器</td><td>只能使用++运算符来遍历容器，总是按照相同顺序遍历一系列值</td></tr>
<tr><td>双向迭代器</td><td>具有正向迭代器的所有特性，同时支持（前缀和后缀）递减运算符</td></tr>
<tr><td>随机访问迭代器</td><td>能够直接跳转到容器钟的任何一个元素</td></tr>



</table>

## 4. 容器Containers
容器是存储其他对象的对象。被存储的对象必须是同一种类型，可以是OOP意义上的对象，也可以是内置类型值。

<table>
<tr><th width="100" colspan="4">一些基本的容器特征</th></tr>
<tr><th>表达式</th><th>返回类型</th><th>说明</th><th>复杂度</th></tr>
<tr><td>X::iterator</td><td>指向T的迭代器类型</td><td>满足正向迭代器要求的任何迭代器</td><td>编译时间</td></tr>
<tr><td>X::value_tye</td><td>T</td><td>T的类型</td><td>编译时间</td></tr>
<tr><td>X u</td><td></td><td>创建一个名为u的空容器</td><td>固定</td></tr>
<tr><td>X()</td><td></td><td>创建一个匿名的空容器</td><td>固定</td></tr>

</table>