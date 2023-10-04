#include<iostream>
using namespace std;

class B;

class A{
    int a;

    public:
    void setData(int a)
    {
        this->a=a;
    }
    friend void add(A a,B b);
};

class B{
    int b;

    public:
    void setData(int b)
    {
        this->b=b;
    }
    friend void add(A a,B b);
};

void add(A a,B b)
{
    // int c;

    if (a.a > b.b)
    {
        cout<<a.a<<"A value is big:";
    }
    else
    {
        cout<<b.b<<"B value is big:";
    }
}



int main()
{
A a1;
B b1;

a1.setData(10);
b1.setData(20);
add(a1,b1);
return 0;
}