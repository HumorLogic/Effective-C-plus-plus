#include<iostream>

enum Week{ Sun, Mon, Tue, Wed, Thu, Fri, Sat };

// ��main_*() ��Ϊmain()������
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