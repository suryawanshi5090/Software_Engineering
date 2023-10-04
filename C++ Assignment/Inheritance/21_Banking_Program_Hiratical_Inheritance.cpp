#include<iostream>
using namespace std;

#define interestrate 3.50

class account
{
    protected:
    char name[100];
    int accountNumber;
    float balance;
    int diposit;
    int withdraw;
    float interest;
    // float charges;
    int year = 1
    int pin;
};

class saving:public account
{
    public:
    void savingaccount()
    {
        cout<<"PLEASE ENTER YOUR PIN NUMBER:";
        cin>>pin;

        if(pin !=5090)
        {
            cout<<endl
            <<endl
            <<"PLEASE ENTER VALID PIN:"<<endl
            <<endl;
            cout<<".........................."<<endl;
        }
        else
        {
            cout<<endl
            <<endl
            <<"-------ENTER SAVING ACCOUNT INFORMATION---------"<<endl<<endl;

            cout<<"ENTER ACCOUNT HOLDER NAME:";
            cin>>name;

            cout<<"ENTER ACCOUNT NUMBER:";
            cin>>accountNumber;

            cout<<"ENTER BANK BALANCE:";
            cin>>balance;

            void checkbalance();
            {
                cout<<endl
                <<endl
                <<"YOUR CURRENT BALANCE IS:"<<balance<<"RS"<<endl<<endl;
                cout<<"..........................."<<endl;
            }

            void dipositAmount();
            {
                cout<<"ENTER DIPOSIT AMOUNT:";
                cin>>diposit;

                balance = balance + diposit;

                cout<<endl
                <<endl
                <<"CLEAR BALANCE IS:"<<balance<<"RS"<<endl;
                cout<<endl
                <<".........................."<<endl;
            }

            void withdrawAmount();
            {
                cout<<endl
                <<"YOUR SAVING ACCOUNT PER ONE TRANSACTION LIMIT IS RS 10,000"<<endl<<endl;
                cout<<"ENTER WITHDRAW AMOUNT:";
                cin>>withdraw;

                if(withdraw > (balance - 3000))
                {
                    cout<<endl
                    <<"INSUFFICIENT BALANCE"<<endl;
                }
                else
                {
                    if(withdraw <= 10000)
                    {
                        cout<<"COLLECT YOUR CASE:"<<endl
                        <<endl;

                        balance = balance - withdraw;

                        cout<<"CLEAR BALANCE IS:"<<balance<<"RS"<<endl;

                        cout<<endl
                        <<"......................"<<endl;
                    }
                }

                void interestAmount();
                {
                    cout<<"YOU GOT INTEREST ONLINE ONCE PER YEAR:"<<endl<<endl;

                    interest = balance*year/100;

                    cout<<"YOUR INTEREST AMOUNT IS:"<<interest<<"RS"<<endl<<endl;

                    balance = balance + interest;

                    cout<<"CLEAR BALANCE IS:"<<balance<<"RS"<<endl;

                    cout<<endl
                    <<"..........................."<<endl;
                }

                void checkBook();
                {
                    cout<<endl
                    <<"SAVING ACCOUNT HOLDER GET ONLY 10 PAGES CHECKBOOK"<<endl<<endl;

                    int pages;

                    cout<<"ENTER CHECKBOOK PAGES:";cin>>pages;

                    if(pages != 10)
                    {
                        cout<<"PLEASE ENTER VALID CHECKBOOK INFORMATION:"<<endl;
                    }
                    else
                    {
                        cout<<endl
                        <<"YOUR CHECKBOOK IS CURRIER AT YOUR HOME WITHIN 2 DAYS:"<<endl;

                        cout<<endl
                        <<"........................"<<endl;
                    }
                }
            }
            void getinformation();
            {
                cout<<endl
                <<"------SAVING ACCOUNT INFORMATION--------"<<endl<<endl;

                cout<<"ACCOUNT NUMBER:       "<<accountNumber<<endl;

                cout<<"CURRENT BALANCE:"<<currentBalance<<endl;

                cout<<"CURRENT BALACE:"<<balance = withdraw - interest<<"RS"<<endl;
                cout<<"DIPOSIT AMOUNT:"<<diposit<<"RS"<<endl;
                cout<<"WITHDRAW AMOUNT:"<<withdraw<<"RS"<<endl;
                cout<<"INTEREST AMOUT:"<<interest<<"RS"<<endl;
                cout<<"CLEAR BALANCE:"<<balance<<"RS"<<endl;
            }
        }
    }
};

class current:public account
{
    public:
    void currentAccount()
    {
        cout<<endl
        <<"PLEASE ENTER YOUR PIN NUMBER:";
        cin>>pin;

        if(pin != 3055)
        {
            coout<<endl
            <<endl
            <<"PLEASE ENTER YOUR PIN:"<<endl<<endl;
            cout<<"....................."<<endl;
        }
        else
        {
            cout<<endl

            <<endl
            <<"----------ENTER CURRENT ACCOUNT INFORMATION-----------"<<endl<<endl;

            cout<<"ENTER ACCOUNT HOLDER NAME:";
            cin>>name;

            cout<<"ENTER ACCOUNT NUMBER:";
            cin>>accountNumber;

            cout<<"ENTER BANK BALANCE:";
            cin>>balance;

            void checkbalance();
            {
                cout<<endl
                <<endl
                <<"YOUR CURRENT BALANCE IS:"<<balance<<"RS"<<endl<<endl;
                cout<<"..........................."<<endl;
            }

            void dipositAmount();
            {
                cout<<"ENTER DIPOSIT AMOUNT:";
                cin>>diposit;

                balance = balance + diposit;

                cout<<endl<<endl
                <<"CLEAR BALANCE IS"<<"RS"<<endl;

                cout<<endl
                <<"......................"<<endl;
            }

            void withdrawAmount();
            {
                cout<<endl
                <<"YOUR CURRENT ACCOUNT PER ONE TRANSACTION LIMIT IS RS 20,000"<<endl<<endl;

                cout<<"ENTER WITHDRAW AMOUNT:";
                cin>>withdraw;

                if(withdraw > (balance - 10000))
                {
                    cout<<endl

                    <<"INSUFFICIENT BALANCE"<<endl;
                }
                else
                {
                    if(withdraw <= 20,0000)
                    {
                        cout<<"PLEASE COLLECT YOUR CASE:"<<endl<<endl;

                        balance = balance - withdraw;

                        cout<<"CLEAR BALANCE IS:"<<balance<<"RS"<<endl;
                        cout<<endl
                        <<"........................"<<endl;
                    }
                }
                void interestAmount()
                {
                    cout<<"CURRENT ACCOUNT HOLDER NOT GETTING ANY INTEREST:"<<endl<<endl;

                    cout<<endl
                    <<"..............................."<<endl;
                }

                void checkBook();
                {
                    cout<<endl
                    <<"SAVING ACCOUNT HOLDER GET 50 PAGES CHECKBOOK"<<endl<<endl;

                    int pages;

                    cout<<"ENTER CHECKBOOK PAGES:";
                    cin>>pages;

                    if(pages != 50)
                    {
                        cout<<"PLEASE ENTER VALID CHECKBOOK INFORMATION:"<<endl;
                    }
                    else
                    {
                        cout<<endl
                        <<"YOUR CHECKBOOK IS CURRIER AT YOUR HOME WITHIN 2 DAYS:"<<endl;

                        cout<<endl
                        <<"............................"<<endl;
                    }
                }
            }
            void getinformation();
            {
                cout<<endl
                <<endl
                <<"---------CURRENT ACCOUNT INFORMATION---------"<<endl
                <<endl;

                cout<<"NAME:       "<<name<<endl<<endl;

                cout<<"ACCOUNT NUMBER:"<<accountNumber<<endl;
                cout<<"CURRENT BALANCE:"<<balance - (diposit - withdraw)<<"RS"<<endl;
                cout<<"DIPOSIT AMOUNT:"<<diposit<<"RS"<<endl;
                cout<<"WITHDRAW AMOUNT:"<<withdraw<<"RS"<<endl;
                cout<<"CLEEAR BALANCE:"<<balance<<"RS"<<endl;        
            }
        }
    }
}; 

int main()
{
int i,choice;

cout<<endl
<<"1.SAVING ACCOUNT:"<<endl;
cout<<"2.COURRENT:"<<endl<<endl;
cout<<"ENTER YOUR CHOICE:";
cin>>choice;

switch(choice)
{
    case 1:
    {
        saving s;
        s.savingaccount();
    }
    break;

    case 2:
    {
        current c;
        c.currentAccount();
    }
    break;
}
return 0;
}