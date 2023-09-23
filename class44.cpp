#include<iostream>
using namespace std;
class base
{
    protected:
    int val;
    public:
    void setdata(int v)
    {
        val=v;
    }

};
class der:public base
{
    public:
    void cube()
    {
        cout<<"CUBE OF "<<val<<" IS "<<val*val*val;
    }
};
 
int main()
{
    der d;
    d.setdata(10);
    d.cube();
    return 0;
}