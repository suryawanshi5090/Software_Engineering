#include<iostream>
using namespace std;

class Lecture{
    string name;
    string subName;
    string courseName;
    int lectureNumber;
    int i;

    public:
    void setData();
    void display();
};

void lecture::setData()
{
    cout<<"Enter Lecture name: ";
    cin>>name;

    cout<<"Enter Subject:";
    cin>>subName;

    cout<<"Enter courseName: ";
    cin>>courseName;

    cout<<"Enter number of lecture:";
    cin>>lectureNumber;
}

void lecture::display()
{
    cout<<endl
    <<"Lecture Name:"<<name<<endl;
    cout<<"Subject:"<<subName<<endl;
    cout<<"Course:"<<courseName<<endl;
    cout<<"Enter bumber of lectures: "<<endl;

}

int main()
{
int i;
lecture l1[10];
for(i=0;i<5;i++)
{
    l1[i].setData();
    {
        cout<<endl<<endl;
        <<"--------FOR NEXT LECTURE----------"<<endl<<endl;
    }
}

cout<<"-----LECTURE AND SUBJECT DETAILS-------"<<endl<<endl;

for(i=0;i<5;i++)
{
    l1[i].display();
    {
        cout<<"........................"<<endl;
    }
}
return 0;
}