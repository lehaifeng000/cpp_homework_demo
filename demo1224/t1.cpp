//输入字符串，将其中的非数字字符删除后，输出整个字符串

#include <iostream>
using namespace std;

void sub(string &a){
    string t="";
    for(int i=0;i<a.length();i++){
        if(a[i]>='0'&&a[i]<='9'){
            t=t+a[i];
        }
    }
    a=t;
}

int main()
{
    string a;
    cin>>a;
    sub(a);
    cout<<a<<endl;
    return 0;
}