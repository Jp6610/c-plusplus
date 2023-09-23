#include<iostream>
using namespace std;
class dmp{
    int a,b;
    public:
    dmp(int x, int y);  //constructor
    void display()
    {
        cout<<"A:"<<a<<endl;
        cout<<"B:"<<b<<endl;

    }
};
dmp::dmp(int x,int y) //class::constructor
{
    a=x;b=y;
}
 
int main()
{
    dmp int1(123,22),int2(56,78); //constructor call itself automatically when we call the class
    cout<<"OBJECT 1:"<<endl;
    int1.display();
    cout<<"OBJECT 2:"<<endl;
    int2.display();


    


    
    return 0;
}