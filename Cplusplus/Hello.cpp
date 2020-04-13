#include <iostream>
#include "basic/class/Rectangle.h"
#include "basic/class/Stock.h"



void ChangeNum(int& n) {
	n = 0;
}


int main() {
	
	Rectangle r1;
	r1.Draw();

	Rectangle* rect = new Rectangle(5, 1);
	(*rect).Draw();
	delete rect;

	int num = 10;
	std::cout << num << std::endl;
	std::cout << &num << std::endl;

	ChangeNum(num);
	std::cout << num << std::endl;
	std::cout << &num << std::endl;
	std::cout << "\n" << std::endl;

	Stock s1 = Stock("Apple", 12, 50.0);
	s1.Show();
	std::cout << "\n" << std::endl;


	Stock s2 = Stock("Xiao", 1000, 12.6);
	s2.Show();
	std::cout << "\n" << std::endl;


	return 0;
}



