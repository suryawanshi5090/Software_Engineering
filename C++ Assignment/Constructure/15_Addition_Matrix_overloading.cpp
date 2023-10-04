#include<iostream>
using namespace std;

class matrix{
    int i;
    int a[3];

    public:
    void setMatrix()
    {
        cout<<endl
        <<endl<<"----------FOR FIRST MATRIX-----------"<<endl<<endl;
        for(i=0;i<3;i++)

        {
            cout<<"Enter the value"
            "<<a["
            <<i<<"]"
            "index is:";
            cin>>a[i];
        }
    }

    void displayMatrix()
    {
        cout<<endl
        <<endl
        <<"-----------1D MATRIX IS-----------"<<endl<<endl;

        for(i=0;i<3;i++)
        {
            cout<<" "<<a[i];
            cout<<endl;
        }
    }
    matrix operator+(matrix s)
    {
        cout<<endl<<"-----------ADDITION OF MATRIX----------"<<endl<<endl;

        int c[3];
        for(i=0;i<3;i++)
        {
            c[i]=a[i]=s.a[i]
            cout<<" "<<c[i]<<endl;
        }
        cout<<endl;
    }
};

int main()
{
matrix a.b;
a.setMatrix();
b.setMatrix();
a.displayMatrix();
b.displayMatrix();
a+b;
return 0;
}