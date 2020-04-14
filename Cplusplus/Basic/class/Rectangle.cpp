#include "Rectangle.h"

Rectangle::Rectangle() :width(), height()
{
	this->width = 0;
	this->height = 0;
}

Rectangle::Rectangle(int h, int w):width(),height()
{
	this->width = w;
	this->height = h;
	//(*this).height = 0;
	//std::cout << this << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "Rectangle object deleted." << std::endl;
}

void Rectangle::Draw()
{
	std::cout << "Draw a width = "  <<width<<" height = "<<height<<"  Rectangle."<< std::endl;
}

inline void Rectangle::SetSize(int w, int h) {

}
