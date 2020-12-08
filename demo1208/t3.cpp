#include <iostream>
using namespace std;

class MyMath
{
public:
    MyMath(){}
    static int Factorial(int n){
        int product=1;
        for(int i=2;i<=n;i++){
            product*=i;
        }
        return product;
    }
};

int main()
{
    cout<<MyMath::Factorial(10)<<endl;    
    return 0;
}