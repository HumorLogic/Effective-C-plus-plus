// coordin.h -- 结构模板和函数原型
// 结构模板
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;    // distance from origin
    double angle;        // direction from origin
};
struct rect
{
    double x;        // horizontal distance from origin
    double y;        // vertical distance from origin
};

// 函数原型
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif
