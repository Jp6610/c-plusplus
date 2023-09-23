#include<iostream>
using namespace std;
class item{
    char id[5],desc[20];
    float price;
    int qoh,re_qty;
    public:
    item()      //constructor
    {
        qoh=0;price=0;re_qty=0;
    }
    void adddata();
    void showdata();

};
void item::adddata() //scope resolution
{
    cout<<"\n ENTER ITEM CODE:";
    cin>>id;
    cout<<"\n ENTER ITEM DESCRIPTION :";
    cin>>desc;
    cout<<"\n ENTER PRICE:";
    cin>>price;
    cout<<"\n ENTER QUANTITY :";
    cin>>qoh;
    cout<<"\n ENTER  RE_ORDER QUANTITY: ";
    cin>>re_qty;
}

void item::showdata()//scope resolution
{
    cout<<"\nITEM CODE: "<<id;
    cout<<"\nDESCIPTION:"<<desc;
    cout<<"\nPRICE:"<<price;
    cout<<"\nQUANTITY: "<<qoh;
    cout<<"\nRE-ORDER QUANTITY : "<<re_qty<<endl;
    


}
int main()
{
    item it;
    char ch;
    do{
        cout<<"\nENTER THE ITEM DETAILS\n";
        it.adddata();
        cout<<endl;
        it.showdata();
        cout<<"DO YOU WANT TO CONTINUE: (y/n)\n";
        cin>>ch;
    }while(ch=='y');
    return 0;
}