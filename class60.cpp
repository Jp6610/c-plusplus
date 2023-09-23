#include<iostream>
using namespace std;
class B
{
    public:
    void display()
    {
        cout<<"CONTENT OF BASE CLASS.\n";
    }
};
class D:public B
{
    public:
    void display()
    {
        cout<<"CONTENT OF DERIVED CLASS.\n";
    }
};
 
int main()
{
    B *b;
    D d;
    b->display(); //this pointer
    b=&d; //address of object d in ointer variable
    b->display();
    return 0;
}