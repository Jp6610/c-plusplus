#include<iostream>
using namespace std;
class rk;         //swapping private data of classes
 class jp
 {
    int v;

    public:
    void input(int i)
    {
        v=i;
    }
    void display(){cout<<v<<"\n";};
    friend void swap(jp &x,rk &y);
 };
 class rk{
    int b;
    public:
    void input(int i)
    {
        b=i;
    }
    void display(){cout<<b<<"\n";};

    friend void swap(jp &x,rk &y);

 };
 void swap(jp &x,rk &y)
 {
    int temp;
    temp= x.v;
    x.v =y.b;
    y.b=temp;
 }
int main()
{
    jp c1;
    rk c2;
    c1.input(25);
    c2.input(34);
    cout<<"BEFORE SWAPPING:";
    c1.display();
    c2.display();
    swap(c1,c2);
    cout<<"AFTER SWAPPING:";
    c1.display();
    c2.display();

    return 0;
}


    