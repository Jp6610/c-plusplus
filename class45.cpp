#include<iostream>
using namespace std;
class p
{
    int a;
    public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class d:public p   //base class p is inherit
{
    int c;
    public:
    void mul();
    void display();
};
void p::get_ab()
{
    cout<<"ENTER VALUES FOR A:";
    cin>>a;
    cout<<"ENTER VALUES FOR B:";
    cin>>b;
}
int p::get_a()
{
    return a;
}
void p::show_a()
{
    cout<<"A:"<<a<<"\n\n";
}
void d::mul()
{
    get_ab();
    c=b*get_a();
}
void d::display()
{
    show_a();
    cout<<"B : "<<b<<"\n";
    cout<<"C : "<<c<<"\n";
}
int main()
{
    d k;
    k.mul(); //first time function calling
    k.display();
    k.mul(); //second time function calling
    k.display();
    return 0;
}