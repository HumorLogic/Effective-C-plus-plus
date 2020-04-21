#include<iostream>


// 把main_*() 改为main()再运行
int main() {

	using namespace std;
	union one4all {
		int int_val;
		long long_val;
		double double_val;
	};

	one4all pail;
	pail.double_val = 18.88;		//存储为double类型
	cout << pail.double_val << "\n";

	pail.int_val = 15;					//存储为int类型，double值丢失
	cout << pail.int_val << endl;


	struct widget {
		char brand[20];
		int type;
		union id {
			long id_num;
			char id_char[20];
		} id_val;
	};

	widget prize;
	prize.type = 1;

	if (prize.type == 1)
		cin >> prize.id_val.id_num;
	else
		cin >> prize.id_val.id_char;

	cout << prize.id_val.id_num << endl;




	return 0;
}