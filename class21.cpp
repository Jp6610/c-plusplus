#include<iostream>  //constructor overloading
using namespace std;
 class complex{
    float x,y;
    public:
    complex()
    {                    }
    
    complex(float a){
        x=y=a;
    }
    complex(float real, float imaginary){
        x= real;y=imaginary;
    }
    friend complex sum(complex c1,complex c2);
    friend void show(complex);

 };
 complex sum(complex c1, complex c2)
 {
    complex c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return c3;
 }
 void show(complex c)
 {
    cout<<c.x<<" + "<<c.y<<endl;
 }
 int main()
{
    complex k(2.7,3.5);
    complex m(1.6);
    complex p;
    p=sum(k,m);
    cout<<"K:";
    show(k);
    cout<<"M:";
    show(m);
    cout<<endl;
    cout<<"p:";
    show(p);


    return 0;
}
