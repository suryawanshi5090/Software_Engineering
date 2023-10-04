#include<iostream>
using namespace std;

void data(int a,int b,int c,int d)
{
    cout<<"Addition of"<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"is="<<a+b+c+d<<endl<<endl;
}

void data(int a,int b,int c)
{
    cout<<"Multiplication of"<<a<<"*"<<b<<"*"<<c<<"is="<<a*b*c<<endl<<endl;
}

void data(int a,int b)
{
    cout<<"Division"<<a<<"/"<<b<<"is="<<(float)a/b<<endl<<endl;
}

int main()
{
data(50,60,70,80);
data(100,50,10);
data(10,20);
return 0;
}