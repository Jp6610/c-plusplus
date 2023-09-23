#include<iostream>//program for runtime polymorphism
using namespace std;
#include<string.h>
class media
{
    protected:
    char title[50];
    float price;
    public:
    media(char *s,float a)
    {
        strcpy(title,s);
        price=a;
    }
    virtual void display()
    { }//empty virtual function
};
class book:public media
{
    int pages;
    public:
    book(char *s,float a,int p):media(s,a) //while we created constructor of derived class we have to inherit the base class in it again
    {
        pages=p;
    }
    void display();
};
class tape:public media
{
    float time;
    public:
    tape(char *s,float a,float t):media(s,a) //while we created constructor of derived class we haveto inherit the base class in it again           
    {
        time=t;
    }
    void display();
};
void book::display()
{
    cout<<"\nTITLE:"<<title;
    cout<<"\nPAGES:"<<pages;
    cout<<"\nPRICE:"<<price;


}
void tape::display()
{
    cout<<"\nTITLE: "<<title;
    cout<<"\nPLAY TIME :"<<time<<"mins";
    cout<<"\nPRICE :"<<price;
}
int main()
{
    char *title=new char[30];
    float price,time;
    int pages;

    //book details
    cout<<"\nENTER BOOK DETAILS\n";
    cout<<"\nTITLE:";cin>>title;
    cout<<"\nPRICE:";cin>>price;
    cout<<"\nPAGES:";cin>>pages;

    book book1(title,price,pages);

    //tape details
    cout<<"\nENTER TAPE DETAILS\n";
    cout<<"\nTITLE:";cin>>title;
    cout<<"\nPRICE:";cin>>price;
    cout<<"\nPLAY TIME(MINS):";cin>>time;
    tape tape1(title,price,time);
    media *list[2];
    list[0]=&book1;
    list[1]=&tape1;

    cout<<"\nMEDIA DETAILS";
    cout<<"\n.......BOOKS.......";
    list[0]->display(); //display book details

    cout<<"\n.......TAPE.......";
    list[1]->display();  //display tape details



    return 0;
}