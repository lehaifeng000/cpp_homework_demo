//设计一个点类Point，包含点的坐标x，y 两个数据成员，采用友元类的方式分别计算两点间的水平距离和垂直距离。

#include <iostream>
using namespace std;

class Point{
    float x,y;
public:
    Point(float _x, float _y);
    friend float getVertical(Point p1, Point p2);
    friend float getHorizontal(Point p1, Point p2);
};
Point::Point(float _x, float _y){
    x=_x;
    y=_y;
}
float getVertical(Point p1, Point p2){
    return abs(p1.x-p2.x);
}
float getHorizontal(Point p1, Point p2){
    return abs(p1.y-p2.y);
}

int main()
{
    Point a(1,1),b(5,6);
    cout<<getVertical(a,b)<<endl;
    cout<<getHorizontal(a,b)<<endl;
    return 0;
}