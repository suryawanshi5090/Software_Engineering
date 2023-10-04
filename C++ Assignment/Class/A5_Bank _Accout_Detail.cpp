#include<iostream>
using namespace std;

class BankAccount{
    string name;
    string account_type;
    int account_number;
    float balance;

    public:
    void allDetails()
    {
        void setData();
        {
            cout<<"ENTER ACCOUNT HOLDER NAME:";
            cin>>name;

            cout<<"ENTER ACCOUNT TYPE:";
            cin>>account_type;

            cout<<"ENTER YOUR ACCOUNT NUMBER:";
            cin>>account_number;

            cout<<"ENTER ACCOUNT BALANCE:";
            cin>>balance;
        }

        void checkBalance();
        {
            cout<<endl
            <<"............................."<<endl<<endl;
            cout<<"YOUR CURRENT BALANCE IS :"<<balance<<endl;
            cout<<endl
            <<"............................"<<endl<<endl;
        }

        void diposit();
        {
            int diposit;
            cout<<"ENTER DIPOSIT AMOUNT:";
            cin>>diposit;

            balance = balance +diposit;
            cout<<endl
            <<"YOUR CLEAR BALANCE IS : "<<balance<<end<<endl;
        }

        void withdraw();
        {
            int withdraw;

            cout<<"ENTER WITHDRAW AMOUNT:";
            cin>>withdraw;

            if(withdraw <= 10000)
            {
                balance = balance - withdraw;
                cout<<endl
                <<"YOUR CURRENT BALANCE IS: "<<balance<<endl;
            }
            else
            {
                cout<<endl<<endl;
                <<"PLEASE ENTER VALID AMOUNT:"<<endl;
            }
        }

        void detail();
        {
        cout<<endl<<endl;
        <<"ACCOUNT DETAILS"<<endl<<endl;
        cout<<endl
        <<"NAME:"<<name<<endl;
        cout<<endl
        <<"ACCOUNT TYPE:"<<account_type<<endl;
        cout<<endl
        <<"ACCOUNT NUMBER: "<<account_number<<endl;
        cout<<endl
        <<"CLEAR BALANCE IS: "<<balance<<endl;
        }
    }
};


int main()
{
    BankAccount PS;
    PS.allDetails();
return 0;
}