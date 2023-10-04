#include<iostream>
using namespace std;

class base{
    protected:
    string teamName;
    string playerName;

    int FI;
    int SI;
    int TI;
    int total;
    float average;

    public:
    void setinformation()
    {
        cout<<"Enter Team Name:";
        cin>>teamName;

        cout<<"Enter Player Name:";
        cin>>playerName;

        cout<<"Enter First inning Score:";
        cin>>FI;

        cout<<"Enter Second Inning Score:";
        cin>>SI;

        cout<<"Enter Third Inning Score:";
        cin>>TI;

        total="FI+SI+TI";
        average = (float)total/3;
    }
};

class derived:public base
{
    public:
    void display()
    {
        cout<<endl
        <<endl
        <<"---------PLAYER SCORE INFORMATION---------"<<endl<<endl;
        cout<<"Team Name is:       "<<teamName<<endl<<endl;
        cout<<"Playe Name is:      "<<playerName<<endl<<endl;
        cout<<"First Inning Score is:       "<<FI<<endl;
        cout<<"Second Inning Score is:       "<<SI<<endl;
        cout<<"Third Inning Score is:      "<<TI<<endl;
        cout<<"..................."<<endl;
        cout<<"Total run is:     "<<total<<endl<<endl;
        cout<<"Average score is:         "<<average<<endl;

        if(FI > SI)
        {
            if(FI > TI)
            {
                cout<<"Highest score is:     "<<FI<<endl;
            }
            else
            {
                cout<<"Highest score is:     "<<TI<<endl;
            }
        }
        else
        {
            if(SI > TI)
            {
                cout<<"Highest score is:      "<<SI<<endl;
            }
            else
            {
                cout<<"Highest score is:      "<<TI<<endl;
            } 
        }
    }
};

int main()
{

derived a;
a.setinformation();
a.display();

return 0;
}   