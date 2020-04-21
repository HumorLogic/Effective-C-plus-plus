#include<iostream>

enum Week{ Sun, Mon, Tue, Wed, Thu, Fri, Sat };

// 把main_*() 改为main()再运行
int main() {

	using namespace std;
	Week today;
	today = Sun;
	Week day;
	day =  Tue;
	
	cout << today << endl;
	cout << day<< endl;
	

	return 0;
}