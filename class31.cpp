#include<iostream> //q.56 //to create a space which store the three variable. overload the operator os that value of variable interchange(x=-x)
using namespace std;
class space
{
    int x,y,z;
    public:
    void getdata(int a, int b,int c);
    void display();
    void operator-();
};
void space::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void space :: display()
{
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<"\n";

}
void space :: operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
 
int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<"Before value: \n";
    s.display();

    -s;
    cout<<"\nAFTER VALUE: \n";
    s.display();
    return 0;
}