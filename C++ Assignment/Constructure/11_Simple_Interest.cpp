#include<iostream>
using namespace std;

class simpleIntrest{
    int p;
    float r;
    int y;

    public:
    simpleIntrest(int p,float r,int y)
    {
        this->p=p;
        this->r=(float)r;
        this->y=y;
    }

    simpleIntrest(int p,int r,int y)
    {
        this->p=p;
        this->r=r;
        this->y=y;
    }

    void SI()
    {
        cout<<"Principle amount="<<p<<endl;
        cout<<"Intrest rate="<<r<<endl;
        cout<<"Year="<<y<<endl;
        cout<<"Simple intrest of amount is="<<(p*r*y)/100<<endl;
        cout<<endl
        <<".............................."<<endl<<endl;
    }

};

int main()
{
simpleIntrest i1(100000,float(2.5),2);
i1.SI();
simpleIntresti2(500000,float(4.5),5);
i2.SI();
return 0;
}   