#include<iostream>
using namespace std;

class Student{
    string name;
    int eng;
    int acc;
    int stat;
    int total;
    static int id;
    float percentage;

    public:
    void information()
    {
        cout<<"Enter student name:";
        cin>>name;

        cout<<"Enter english marks:";
        cin>>eng;

        cout<<"Enter accounting marks:";
        cin>>acc;

        cout<<"Enter statistic marks:";
        cin>>stat;

        total = eng + state;
        percentage = (float)total/3;
    }

    void about()
    {
        cout<<endl<<endl;
        <<"\t"<<"--------STUDENT MARKSHEETS----------"<<endl<<endl;

        cout<<endl
        <<"RollNo Mame English Accounting Statistics Total percentage"<<endl;
    }

    void display()
    {
        id++;
        cout

        <<id<<"    "<<name<<"    "<<eng<<"   "<<acc<<"    "<<stat<<"    "<<Total<<"   "<<percentage<<endl;
    }

};
 int student::id;

int main()
{
int i;
student s[10];

for(i=0;i<3;i++)
{
    s[i].information();
}
s[i].about();

for(i=0;;i<3;i++)
{
    s[i].display();
}
return 0;
}   