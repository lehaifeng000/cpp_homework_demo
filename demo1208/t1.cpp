#include <iostream>
#include <math.h>
using namespace std;

class Point
{
public:
    double x,y;  
    Point(){}
    Point(double _x, double _y){
        x = _x;
        y = _y;
    }
    double distance(Point p1){
        return sqrt(pow(p1.x-x,2)+pow(p1.y-y,2));
    }
};

int main()
{
    Point p1=Point(1,1);
    Point p2=Point(4,5);
    double dis=p1.distance(p2);
    cout<<dis<<endl;    
    return 0;
}