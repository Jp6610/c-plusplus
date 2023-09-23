#include<iostream> //overload the + operator so that the user can add the two variable and display in thrid varable
using namespace std;
class complex
{
    float x,y;
    public:
    complex()
    {      }
    complex(float real,float image)
    {
        x=real,y=image;
    }
    complex operator +(complex);
    void display();
};
complex complex :: operator +(complex c) //here complex complex because return type is complex
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
void complex :: display()
{
    cout<<x<<"+"<<y<<"\n";
}
 
int main()
{
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2;
    cout<<"C1: ";
    c1.display();
    cout<<"C1: ";
    c2.display();
    cout<<"\n*******\n";
    cout<<"C3 :";
    c3.display();



    return 0;
}