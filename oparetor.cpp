#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    int sum=a+b;
    int sub=a-b;
    int multi=a*b;
    float div=(float)a/b;
    int mod=a%b;
    cout<<"Sub is:"<<sub<<endl;
    cout<<"Sum is:"<<sum<<endl;
    cout<<"Multiplication is:"<<multi<<endl;
    cout<<"Divison is:"<<div<<endl;
    cout<<"Modulas is:"<<mod<<endl;
    return 0;
}