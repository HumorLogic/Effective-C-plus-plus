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
	void SetSize(int w, int h);

};



#endif // !RECTANGLE_H

