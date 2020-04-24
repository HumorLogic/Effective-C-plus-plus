//smrtptrs.cpp -- 使用三种智能指针

#include<iostream>
#include<string>
#include<memory>


class Report {
private:
	std::string str;
public:
	Report(const std::string s) :str(s) {
		std::cout << "对象被创建！\n";
	}
	~Report() {
		std::cout << "对象删除！\n";
	}
	void comment() const { std::cout << str << "\n"; }
};


// 把main_*() 改为main()再运行
int main_smrtptrs() {

	{
		std::auto_ptr<Report> ps(new Report("使用 autp_ptr"));
		ps->comment();
	}

	{
		std::shared_ptr<Report> ps(new Report("使用 shared_ptr"));
		ps->comment();
	}

	{
		std::unique_ptr<Report> ps(new Report("使用unique_ptr"));
		ps->comment();
	}

	return 0;
}