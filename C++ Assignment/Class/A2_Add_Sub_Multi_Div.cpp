#include<iostream>
using namespace std;

class operation{
    int a,b;

    public:
    void all()
    {
        void value();
        {
            cout<<"Enter the value of A =";
            cin>>a;

            cout<<"Enter the value of B =";
            cin>>b;
        }

        void add();
        {
            cout<<endl
            cout<<"Addition of"
            <<"="<<a<<"+"<<b<<"="<<a+b<<endl
            endl;
        }
        void sub();
        {
            cout <<"Subtraction of"
            <<"="<<a<<"-"<<b<<"="<<a-b<<endl
            <<endl;
        }

        void multi();
        {
            cout<<"Miltiplication of"
            <<"="<<a<<"*"<<b<<"="<<a*b<<endl
            <<endl;
        }

        void div();
        {
            cout<<"Division of"
            <<"="<<a<<"/"<<b<<"="<<(float)a/b<<endl
            endl;
        }
    }
};

int main()
{
operation a;
a.value();
a.add();
// a.sub();
// a.multi();
// a.div();
// a.all();
return 0;
}