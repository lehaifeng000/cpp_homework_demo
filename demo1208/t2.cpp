#include <iostream>
using namespace std;

enum SHAPE{
    CUBE=1, //正方体
    CUBOID=2, //长方体
    COLUMNAR=3 //柱体
};

class Box
{
public:
    double arg1,arg2,arg3;  
    enum SHAPE shape; 
    Box(){}
    Box(enum SHAPE _shape, double a1, double a2=0, double a3=0){
        /** _shape ：
         *      1.CUBE a1:边长
         *      2.CUBOID a1:长 a2:宽 a3:高
         *      3.COLUMNAR a1:底面半径 a2:高
         **/
        shape=_shape;
        arg1=a1;
        arg2=a2;
        arg3=a3;
    }
    ~Box(){}
    double getVolume(){
        switch (shape)
        {
        case CUBE:
            return arg1*arg1*arg1;
            // break;
        case CUBOID:
            return arg1*arg2*arg3;
        case COLUMNAR:
            return 3.14*arg1*arg1*arg2;
        default:
            return 0;
        }
    }
    double getSurfaceArea(){
        switch (shape)
        {
        case CUBE:
            return 6.0*arg1*arg1;
            // break;
        case CUBOID:
            return 2*(arg1*arg2 + arg1*arg3 + arg2*arg3);
        case COLUMNAR:
            return 3.14*2*arg1*arg2;
        default:
            return 0;
        }
    }
};

int main()
{
    // Box b= Box(CUBE,10);
    Box b= Box(CUBOID,10,20,30);
    // Box b= Box(COLUMNAR,10,20);
    cout<<b.getVolume()<<endl;
    cout<<b.getSurfaceArea()<<endl;
    return 0;
}