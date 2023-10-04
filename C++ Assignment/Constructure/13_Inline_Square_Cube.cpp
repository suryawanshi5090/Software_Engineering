#include<iostream>
using namespace std;

inline int multi(int a,int b)
{
    return a*b;
}

inline int square(int a)
{
    return a*a;
}

inline int cube(int a)
{
    return a*a*a;
}

int main()
{
cout<<"Multiplication of"<<5<<"and"<<6<<"is"<<multi(5,6)<<endl;
cout<<"Square of"<<2<<"is:"<<square(2)<<endl;
cout<<"Cube of"<<3<<"is:"<<Cube(3)<<endl;
return 0;
}