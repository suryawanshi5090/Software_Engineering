#include<iostream>
using namespace std;

class BookShop{
    string shopName;
    string bookName;
    int page;
    string autherName;
    string publisherName;
    int year;
    float price;

    public:
    void getBookInformation()
    {
        cout<<"ENTER SHOP NAME: ";
        cin>>shopName;

        cout<<"ENTER BOOK NAME:";
        cin>>bookName;

        cout<<"PAGES OF BOOK IS:";
        cin>>page;

        cout<<"ENTER BOOK AUTHER NAME:";
        cin>>autherName;

        cout<<"ENTER BOOK PUBLISHER NAME:";
        cin>>publisherName;

        cout<<"ENTER PUBLICATION YEAR:";
        cin>>year;

        cout<<"ENTER BOOK PRICE IN RS.";
        cin>>price;

    }

    void displayBook()
    {
        cout<<endl<<endl;
        <<"==>>---BOOK DETAILS---<<=="<<endl<<endl;
        cout<<endl
        <<"SHOP NAME:"<<shopName<<endl<<endl;
        cout<<endl
        <<"BOOK NAME: "<<bookName<<endl;
        cout<<endl
        <<"PAGES OF THE BOOK:"<<page<<endl;
        cout<<endl
        <<"BOOK AUTHER NAME: "<<autherName<<endl;
        cout<<endl
        <<"BOOK PUBLISHER NAME:"<<publisherName<<endl;
        cout<<endl
        <<"BOOK PUBLICATUON YEAR:"<<year<<endl;
        cout<<endl
        <<"BOOK PRICE IS:"<<price<<endl;

    }
};

int main()
{
BookShop bs;
bs.getBookInformation();
bs.displayBook();
return 0;
}