#include<iostream>
using namespace std;

class matrix{
    int i,j,n;
    
    public:
    void setMatrix()
    {
        cout<<"Enter the value of N =";
        cin>>n;
        int a[n][n];
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"Enter the value "
                "a["<<i<<"]["<<j<<"]"
                "index is =";
                cin>>a[i][j];
            }
        }
        cout<<endl
        <<"MATRIX IS"<<endl
        <<endl;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<" "<<a[i][j];
            }
            cout<<endl;
        }
    }
};

int main()
{
matrix a;
a.setMatrix();
return 0;
}