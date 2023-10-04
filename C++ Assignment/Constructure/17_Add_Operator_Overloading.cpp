#include<iostream>
using namespace std;

class show{
    int choice;

    public:
    void display()
    {
        cout<<"1.addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"Enter your choice=";
        cin>>choice;

        switch(choice)
        case 1:
        {
            class base
            {
                int a = 10;

                public:
                base(int a)
                {
                    this->a=a;
                }
                base operator+(base b)
                {
                    int temp;
                    temp = a+b.a;
                    return temp;
                }

                void add()
                {
                    cout<<"Addition is ="<<a<<endl;
                }
            };
        }
    }
};


int main()
{
show s1;
s1.display();
return 0;
}