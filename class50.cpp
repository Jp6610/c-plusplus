#include<iostream>////program for defining a class publisher that stores the name of the title and other class for sales details,which stores the number of sales for three months
using namespace std;
#define len 80
#define month 3
class pub
{
    protected:
    char title[len];
    public:
    void getdata();
    void putdata();
}; 
void pub::getdata()
{
    cout<<"\nENTER THE TITLE:\n";
    cin>>title;
}
void pub::putdata()
{
    cout<<"\nTHE TITLE IS :"<<title<<endl;
}
class sales
{
    protected:
    float sale[month];
    public:
    void getdata();
    void putdata();

};
void sales::getdata()
{
    cout<<"ENTER THE SALES FOR THREE MONTHS:\n";
    for(int i=0;i<month;i++)
    {
        cin>>sale[i];    //input three values in array
    }
}
void sales::putdata()
{
    for(int i=0;i<month;i++)
    {
        cout<<"THE SALES FOR"<<i+1<<"MONTH IS :"<<sale[i]<<endl;
    }
}
class book:public pub,public sales
{
    protected:
    float price;
    int pages;
    public:
    void getdata()
    {
        pub::getdata();
        cout<<"ENTER THE PRICE OF THE BOOK :";
        cin>>price;
        cout<<"ENTER THE NUMBER OF PAGES :";
        cin>>pages;
        sales::getdata();


    }
    void putdata()
    {
        pub::putdata();
        cout<<"THE PRICE OF THE BOOK IS :"<<price<<endl;
        cout<<"THE NUMBER OF PAGES IS :"<<pages<<endl;
        sales::putdata();

    }
};
class tape:public pub,public sales
{
    protected:
    float time;
    float price;
    public:
    void getdata()
    {
        pub::getdata();
        cout<<"ENTER THE PRICE OF THE TAPE:";
        cin>>price;
        cout<<"ENTER THE PLAYING TIME :";
        cin>>time;
        sales::getdata();

    }
    void putdata()
    {
        pub::putdata();
        cout<<"\nTHE PRICE OF THE TAPES IS :"<<price<<endl;
        cout<<"\nTHE PLAYING TIME IS :"<<time<<endl;
        sales::putdata();

    }
};
 
int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}