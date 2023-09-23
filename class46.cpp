#include<iostream>//program for declare a derive class batsman from cricketer,data member of batsman. Totak runs,average runs and best performance
using namespace std;
class cricket
{
    protected:
    char name[20];
    int totalmatch;
    public:
    void read()
    {
        cout<<"Name:";
        cin>>name;
    }
    void show()
    {
        cout<<"Name :"<<name<<endl;
    }
};
class batsman:public cricket{
    int totalrun,total,atch,average,bestperform;
    public:
    void read()
    {
        cricket::read();
        cout<<"TOTAL MATCH :";
        cin>>totalmatch;
        cout<<"BEST PERFORMANCE : ";
        cin>>bestperform;
        cout<<"---------------------";

    }
    void calculate()
    {
        cricket::show();
        cout<<"TOTAL MATCH :"<<totalmatch<<endl;
        cout<<"TOTAL RUN :"<<totalrun<<endl;
        cout<<"AVERAGE :"<<average<<endl;
        cout<<"BEST PERFORmance :"<<bestperform<<endl; 
    }
};

int main()
{
    batsman b;
    b.read();
    b.calculate();
    cout<<endl;
    b.show();
    return 0;
}