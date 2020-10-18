#include <iostream>

using namespace std;

// 方程
double f(double x){
    return x*x*x-5*x*x+16*x-80;
}

// 调整x1,x2
double ajust_sec(double * x1,double * x2){
    double f1=f(* x1),f2=f(* x2);
    while (f1*f2>0)
    {
        *x1=*x1-0.03;
        *x2=*x2+0.05;
        f1=f(* x1);
        f2=f(* x2);
    }
    // cout<<'('<<*x1<<','<<*x2<<')';
}

// 求x的坐标
double x_axis(double x1,double x2){
    double x;
    x=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
    return x;
}

int main()
{
    double x=0,x1=0,x2=0.1,e=0;
    while (0.0000001>f(x))
    {
        ajust_sec(&x1, &x2);
        if(f(x1)==0){
            x=x1;
            break;
        }else if (f(x2)==0){
            x=x2;
            break;
        }
        // 计算x坐标
        x=x_axis(x1,x2);
        if(f(x)==0){
            break;
        }else if(f(x)*f(x1)>0){
            x1=x;
        }else{
            x2=x;
        }
    }
    cout<<x<<endl;
    return 0;
}