#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
    void getdata(int a, float b);

    void putdata()
    {
        cout<<"Number :"<<number;
        cout<<"\nCost:"<<cost;
    }
};
void item::getdata(int a,float b)   //scoper resolution //function
{
    number=a;
    cost=b;
}
 
int main()
{
    item x;
    x.getdata(300,550.62);
    x.putdata();
    return 0;
}