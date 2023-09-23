#include<iostream>
using namespace std;
class salary
{
    float net,hra,da,basic,pf;
    char name[20];
    public:
    void nb()
    {
        cout<<"NAME   :";
        cin>>name;
        cout<<"BASIC  :";
        cin>>basic;
    }
    void add()
    {
        hra=(basic*2)/10;
        cout<<"HRA    :"<<hra<<endl;
        da=(basic*2.4)/10;
        cout<<"DA     :"<<da<<endl;
        cout<<"GROSS  :"<<hra+da+basic<<endl;
        pf=(basic*1)/10;
        cout<<"PF     :"<<pf<<endl;
        cout<<"NET    :"<<hra+da+basic-pf<<endl;
    }
};
 
int main()
{
    salary e;
    e.nb();
    e.add();
    return 0;
}