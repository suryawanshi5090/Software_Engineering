#include<iostream>
using namespace std;



class Fibo{
    int a=0,b=1,c,d;

    public:
    void setData()
    {
        int n;
        cout<<"Enter N=";
        cin>>n;
        if(n==0 || n==1)
        {
            cout<<a<<endl;
            <<b<<endl;
        }
        else if(n>1)
        {
            cout<<a<<endl
            <<b<<endl;
            for(d=2;d<=2;d++)
            {
                c=a+b;
                a=b;
                b=c;
                cout<<c<<endl;
            }
        }
    }
};

class factorial{
    int i,fact=1;
    public:
    void set()
    {
        int n;
        cout<<"Enter the value of N=";
        cin>>n;

        for(i=1;j<=n;i++)
        {
            fact *= i;
        }
        cout<<"Factorial of"<<n<<"="<<fact<<endl;
    }
};

int main()
{
    Fibo a;
    a.setData();

    cout<<"FACTORIAL INFORMATION"<<endl
    endl;
    
    factorial x;
    x.set();
return 0;
}