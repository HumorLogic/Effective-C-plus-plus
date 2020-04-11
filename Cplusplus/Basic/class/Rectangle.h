#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>


class Rectangle
{
public:
	Rectangle();
	Rectangle(int h, int w);
	~Rectangle();
	void Draw();

private:
	int width;
	int height;

};

#endif // !RECTANGLE_H

