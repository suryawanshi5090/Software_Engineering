#include<iostream>
using namespace std;

class addMatrix{
    int i,j,n,add;

    public:
    void setMatrix()
    {
        cout<<"Enter the value of N =";
        cin>>n;

        int a[n][n];
        int b[n][n];

        cout<<endl
        <<endl
        <<"  "
        <<" FOR FIRST MATRIX"<<endl
        <<endl;

        for(i=0,i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"Enter the value"
                "a["
                <<i<<"]["<<j<<"]"
                "index is= ";
                cin>>a[i][j];
            }
        }
        cout<<endl<<" "
        <<"FOR SECOND MATRIX"<<endl
        <<endl;
        for(i=0;i<n;i++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<"Enter the value"
                    "a["
                    <<i<<"]["<<j<<"]"
                    "index is =";
                    cin>>b[i][j];
                }
            }
            cout<<endl
            <<endl;
            <<"FIRST SECOND"<<endl
            <<endl;

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<" "<<a[i][j];
                }
                cout<<" ";

                for(j=0;j<n;j++)
                {
                    cout<<" "<<b[i][j];
                }
                cout<<endl;
            }

            //cout<<endl
            //<<" SECOND MATRIX IS"<<endl
            //<<endl;

            //for(i=0;i<n;i++)
            //{
            //    for(j=0;j<n;j++)
            //    {
            //        cout<<" "<<b[i][j];
            //    }
            //    cout<<endl;
            //}
        
            cout<<endl
            <<"ADDITION OF MATRIX"<<endl
            <<endl;

            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    add = a[i][j] + b[i][j];
                    cout<<" "<<add;
                }
                cout<<endl;
            }   
        }
    }
};


int main()
{
addMatrix a;
a.setMatrix();
return 0;
}