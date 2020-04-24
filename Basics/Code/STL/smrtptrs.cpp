//smrtptrs.cpp -- ʹ����������ָ��

#include<iostream>
#include<string>
#include<memory>


class Report {
private:
	std::string str;
public:
	Report(const std::string s) :str(s) {
		std::cout << "���󱻴�����\n";
	}
	~Report() {
		std::cout << "����ɾ����\n";
	}
	void comment() const { std::cout << str << "\n"; }
};


// ��main_*() ��Ϊmain()������
int main_smrtptrs() {

	{
		std::auto_ptr<Report> ps(new Report("ʹ�� autp_ptr"));
		ps->comment();
	}

	{
		std::shared_ptr<Report> ps(new Report("ʹ�� shared_ptr"));
		ps->comment();
	}

	{
		std::unique_ptr<Report> ps(new Report("ʹ��unique_ptr"));
		ps->comment();
	}

	return 0;
}