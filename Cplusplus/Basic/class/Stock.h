#include <string>

class Stock
{
public:
	Stock();		//默认构造函数
	Stock(const std::string& co, long n = 0, double pr = 0.0);
	~Stock();	//析构函数
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

