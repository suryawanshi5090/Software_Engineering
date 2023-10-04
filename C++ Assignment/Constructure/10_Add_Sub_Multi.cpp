#include<iostream>
using namespace std;

class Operation{
    int a,b;

    public:
    Operation(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    void display()
    {
        cout<<endl
        <<"Addition of"<<a<<"+"<<b<<"is:"<<a+b<<endl<<endl;
        cout<<"Subtraction of"<<a<<"-"<<b<<"is:"<<a-b<<endl<<endl;
        cout<<"Multiplication of"<<a<<"*"<<b<<"is:"<<a*b<<endl<<endl;
        cout<<"Division of"<<a<<"/"<<b<<"is:"<<(float)a/b<<endl<<end;
    }
};

int main()
{
    Operation o(10,20);
    o.display();
return 0;
}