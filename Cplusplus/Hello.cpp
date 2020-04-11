#include <iostream>
#include "basic/class/Rectangle.h"

int main() {
	
	Rectangle rect = Rectangle();
	rect.Draw();

	Rectangle r2 = Rectangle(10, 10);
	r2.Draw();
	std::cout << "Hello World" <<std:: endl;
	return 0;
}