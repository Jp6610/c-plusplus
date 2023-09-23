#include<iostream>//Q81 program of pointer to object
using namespace std;
class item
{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code=a;
        price=b;
    }
    void show()
    {
        cout<<"CODE :"<<code<<endl;
        cout<<"PRICE:"<<price<<endl;
    }
};
const int size=2;
 
int main()
{
    item *p=new item[size];
    item *d; //also can be written as int *d=p;
    d=p;
    int x,i;
    float y;
    for(i=0;i<size;i++)
    {
        cout<<"INPUT CODE AND PRICE OF ITEM "<<i+1;
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }   
    for(i=0;i<size;i++)
    {
        cout<<"ITEM :"<<i+1<<endl;
        d->show();
        d++;
    }
    return 0;
}