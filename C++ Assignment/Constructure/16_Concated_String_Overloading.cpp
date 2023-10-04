#include<iostream>
#include<string.h>
using namespace std;

class addstring
{
    char a[20];

    public:
    void setString()
    {
        cout<<"Enter String 1 = ";
        cin>>a;
    }

    void addString()
    {
        cout<<"String 1="<<a<<endl;
    }

    addstring operator+(addstring s)
    {
        string c;
        strcat(a,s.a);

        cout<<endl
        <<"Concated string is ="<<endl;
    }
};




int main()
{
addstring s[20],s1[100];
s[20].addString();
s1[20].addString();
s[20]+s1[20];
return 0;
}