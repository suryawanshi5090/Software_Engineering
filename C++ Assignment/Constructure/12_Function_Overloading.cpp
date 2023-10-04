#include<iostream>
using namespace std;

#define PI 3.14

void area(int r)
{
    cout<<"Area of circle is ="<<PI*r*r<<endl<<endl;
}

void area(int I,int W)
{
    cout<<"Area of circle is "<<I*W<<endl;
}

int main()
{
    area(10);
    area(6,4);
return 0;
}