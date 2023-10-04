#include<iostream>
using namespace std;

class student{
    protected:
    char name[20];
    int rollNo;

    public:
    void display()
    {
        cout<<"Enter student name:";
        cin>>name;

        cout<<"Enter roll number:";
        cin>>rollNo;
    }
};

class subject:public student
{
    int maths;
    int physics;

    public:
    void show()
    {
        cout<<"Enter Maths marks:";
        cin>>account;

        cout<<"Enter Physics marks:";
        cin>>physics;
    }
};

class totalMarks:public subject{
    protected:
    int total;
    float percentage;

    public:
    void seeData()
    {
        total=maths+physics;
        percentage=(float)total/2;
    }
};

class information:public totalMarks{
    public:
    void getData()
    {
        cout<<endl
        <<endl
        <<"-------STUDENT MARKSHEET---------"<<endl<<endl;

        cout<<"Student name is:     "<<name<<endl;
        cout<<"Student rollNo is:"<<rollNo<<endl;
        cout<<"Maths marks is:"<<maths<<endl;
        cout<<"Physics marks is:"<<physics<<endl;
        cout<<"Total Marks is:"<<total<<endl;
        cout<<"Percentage is: "<<percentage<<endl;
        cout<<endl

        <<"......................"<<endl;
    }
};
int main()
{
int i,n;
cout<<"Enter number of student:";
cin>>n;
information s[200];

for(i=1;i<=n;i++)
{
    cout<<endl<<"---------STUDENT DERAIL--------"<<endl<<endl;
    s[i].display();
    S[i].show();
    s[i].seeData();
}
for(i=1;i<=n;i++)
{
    s[i].getData();
}
return 0;
}