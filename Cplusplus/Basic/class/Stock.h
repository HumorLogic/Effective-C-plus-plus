#include <string>

class Stock
{
public:
	Stock();		//Ĭ�Ϲ��캯��
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock();	//��������
	void Buy(long num, double price);
	void Sell(long num, double price);
	void Update(double price);
	void  Show() const;
	const Stock& TopVal(const Stock& s) const;


private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void Set_Tot() { total_val = shares * share_val; }

};

