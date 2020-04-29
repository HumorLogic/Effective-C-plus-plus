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


## 泛型编程
STL是一种泛型编程（generic programming）。面向对象编程关注的式编程的数据方面，而泛型编程关注的是算法。他们之间的共同点是抽象和创建可重用代码，但理念决然不同。  
泛型编程旨在编写独立于数据类型的代码。在C++中，完成通用程序的工具是模板。当然模板使得能够按照泛型定义函数或类，而STL通过通用算法更进了一步。


<p><img height="10"/></p>

-------------

<a id="iterator"></a>
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
	<tr><td align="center"><b>输入迭代器</b></td><td>必须能否访问容器中所有的值</td></tr>
<tr><td align="center"><b>输出迭代器</b></td><td>程序可以修改容器的值而不能读取</td></tr>
<tr><td align="center"><b>正向迭代器</b></td><td>只能使用++运算符来遍历容器，总是按照相同顺序遍历一系列值</td></tr>
<tr><td align="center"><b>双向迭代器</b></td><td>具有正向迭代器的所有特性，同时支持（前缀和后缀）递减运算符</td></tr>
<tr><td align="center"><b>随机访问迭代器</b></td><td>能够直接跳转到容器钟的任何一个元素</td></tr>

</table>


<p><img height="10"/></p>

--------------

<a id="container"></a>
## 4. 容器Containers
容器是存储其他对象的对象。被存储的对象必须是同一种类型，可以是OOP意义上的对象，也可以是内置类型值。  

### 4.1 基本容器
下面是容器容器的特性，基本容器不能保证其元素都按照特定的顺序存储，也不能保证元素的顺序不变。

<table width="800" >
<tr><th colspan="4">一些基本的容器特征</th></tr>
<tr><th width="100">表达式</th><th width="120">返回类型</th><th width="250">说明</th><th width="80">复杂度</th></tr>
<tr><td>X::iterator</td><td>指向T的迭代器类型</td><td>满足正向迭代器要求的任何迭代器</td><td>编译时间</td></tr>
<tr><td>X::value_type</td><td>T</td><td>T的类型</td><td>编译时间</td></tr>
<tr><td>X u;</td><td></td><td>创建一个名为u的空容器</td><td>固定</td></tr>
<tr><td>X();</td><td></td><td>创建一个匿名的空容器</td><td>固定</td></tr>
<tr><td>X u(a);</td><td></td><td>调用复制构造函数后u==a</td><td>线性</td></tr>
<tr><td>X u=a;</td><td></td><td>作用同X u(a);</td><td>线性</td></tr>
<tr><td> r = a;</td><td>X&</td><td>调用赋值运算后r==a</td><td>线性</td></tr>
<tr><td> (&a)->~X()</td><td>void</td><td>对容器中每个元素应用析构函数</td><td>线性</td></tr>
<tr><td> a.begin()</td><td>迭代器</td><td>返回指向容器第一个原色的迭代器</td><td>固定</td></tr>
<tr><td> a.end()</td><td>迭代器</td><td>返回超尾值迭代器</td><td>固定</td></tr>
<tr><td> a.size()</td><td>无符号整型</td><td>返回元素个数，等价于a.end()-a.begin()</td><td>固定</td></tr>
<tr><td> a.swap(b)</td><td>void</td><td>交换a和b的内容</td><td>固定</td></tr>
<tr><td> a==b</td><td>可转换为bool</td><td>如果a和b的长度相同，且a中每个元素都等于b中相应的元素，则为真</td><td>线性</td></tr>
<tr><td> a!=b</td><td>可转换为bool</td><td>返回!(a==b)</td><td>线性</td></tr>

</table>

其中**X**表示容器类型，如**vector**；**T**表示存储在容器中的对象类型；**a** 和 **b** 表示类型为**X**的值；**r**表示类型为`X&`的值；**u**表示类型为X的标识符。

### 4.2 序列容器
可以通过添加要求改进基本的容器概念。序列（sequence）是一种重要的改进。序列概念增加了迭代器至少是正向迭代器这样的要求，这保证了元素将按照特定顺序排列，不会在两次迭代之间发生变化。  
7种STL序列：
<table>
<tr><th colspan="3">7种序列容器</th></tr>
<tr><th>容器</th><th width="450">特点</th><th>常用方法</th></tr>
<tr><td align="center">vector</td><td>是数组的一种类表示，提供了自动内存管理功能，可以动态的改变vector对象的长度，支持随机访问。</td><td>rbegin()、rend()</td></tr>
<tr><td align="center">deque</td><td>表示双端队列，从deque对象的开始位置插入和删除元素的时间是固定的，而不是像vector那样是线性的。</td><td></td></tr>
<tr><td align="center">list</td><td>表示双向链表。list在链表种任意位置进行插入和删除的时间都是固定的。</td><td><code>insert()</code>、<code>sort()</code>、<code>remove()</code>、<code>merge()</code>、<code>unique()</code></td></tr>
<tr><td align="center">forward_list</td><td>它实现了单链表。每个节点都只链接到下一个节点，因此forward_list只需要正向迭代器。</td><td>相比list，forward_list更简单紧凑，功能也更少，不可反转。</td></tr>
<tr><td align="center">queue</td><td>queue模板类是一个适配器类。不允许随机访问队列元素和变量元素。可以添加元素到队尾，从队首删除元素等。</td><td><code>front()</code>、<code>back()</code>、<code>push()</code>、<code>pop()</code></td></tr>
<tr><td align="center">priority_queue</td><td>支持的操作和queue模板类相同，是另一种适配器类。最大的区别队列中最大的元素被移到队首。</td><td><code>size()</code>、<code>top()</code></td></tr>
<tr><td align="center">array</td><td>array并非STL容器，因为长度是固定的，没有定义调整容器大小的操作。</td><td><code>operator[]()</code>、<code>at()</code>,很多标准STL算法可以用于array对象，如<code>copy()</code>、<code>for_each()</code></td></tr>

</table>

<p><img height="10"/></p>

### 4.4 关联容器

关联容器（associative container）是对容器概念的另一种改进。关联容器将值与键关联在一起，并使用键来查找值。关联容器的优点在于，它提供了对元素的快速访问，允许插入新的元素但不能插入指定位置。STL提供了4种关联容器：set、multiset、map和multimap。

<table>
<tr><th colspan="3">4种关联容器</th></tr>
<tr><th>容器</th><th width="450">特点</th><th>常用方法</th></tr>
<tr><td align="center">set</td><td>是最简单的关联容器，其值类型和与键相同，键是唯一的，不能存储多个相同的值。可翻转、排序。</td><td>rbegin()、rend()</td></tr>
<tr><td align="center">multiset</td><td>和set类似，最大的区别是multiset键和值得类型不同，且同一个键可能与多个值相关联。</td><td></td></tr>
<tr><td align="center">map</td><td></td><td></td></tr>
<tr><td align="center">multimap</td><td></td><td></td></tr>
</table>

<p><img height="10"/></p>

### 4.6 无序关联容器（C++11）
无序关联容器与关联容器一样，通过键与值关联起来。差别在于关联容器是基于树结构的，而无序机构关联容器是基于数据结构哈希表的，这可以提高添加、删除和查找算法的效率。
- unordered_ser
- unordered_multiset
- unordered_map
- unorddered_multimap

-------------

## 5. 函数对象

很多STL算法都是用函数对象——也叫函数符（functor）。函数符是可以以函数方式与`（）`结合使用的任意对象。这包括函数名、指向函数的指针和重载了`（）`运算符的类对象（即定义了函数`operator( )( )`的类）。例如，可以这样定义一个类：  

```c++
class Linear{
private:
	double slope;
}
```



## 算法