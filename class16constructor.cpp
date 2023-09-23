#include<iostream>
using namespace std;
 class myclass{
    int data;
    public:
    myclass(int d)   //constructor
    {
        data=d;
    }
    void show()
    {
        cout<<data<<endl;
    }

 };
int main()
{
    myclass m1(10),m2(20);
    m1.show();
    m2.show();
    return 0;
}