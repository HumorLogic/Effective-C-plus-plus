#include<iostream>

enum Week{ Sun, Mon, Tue, Wed, Thu, Fri, Sat };
enum direction { East = 11, West = 22, North = 33, South = 44 };
// 把main_*() 改为main()再运行
int main_enumuse() {

	using namespace std;
	Week today;
	today = Sun;
	Week day;
	day =  Tue;
	
	cout << today << endl;
	cout << day<< endl;
	
	direction dir;
	dir = South;
	cout << dir;

	return 0;
}