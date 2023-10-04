#include<iostream>
using namespace std;

template<class t1,class t2>

class A
{
    t1 a;
    t2 b;

    public:
    void setData(t1 a,t2 b)
    {
        this->a=a;
        this->b=b;
    }

    void display()
    {
        a=a*b;
        b=a/b;
        a=a/b;
        cout<<"After swapping the value of A is:"<<a<<endl;
        cout<<"After swapping the value of B is:"<<b<<endl;
    }
};

int main()
{
A<float,float>a1;

a1.setData(2.5,3.5);
a1.display();

return 0;
}