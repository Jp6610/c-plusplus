#include<iostream>
using namespace std;  
class point
{
    private:
    int x,y;
    public:
    void pnt()
    {
        x=0;
        y=0;
    }
    void read()
    {
        cout<<"ENTER THE VALUE OF X";
        cin>>x;
        cout<<"ENTER Y";
        cin>>y;
    }
    void show()
    {
        cout<<"ADDITION OF X AND Y IS:"<<x+y;
    }
};
 
int main()
{
    point p;
    p.pnt();
    p.read();
    p.show();
    return 0;
}