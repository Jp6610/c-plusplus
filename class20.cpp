#include<iostream>   //constructor overloading
using namespace std;
class data{
    int d;
    public:
    data()
    {
        cout<<"CONSTRUCTOR WITHOUT ARGUEMENT"<<endl;
        d=0;
    }
    data(int dt)
    {
        cout<<"CONSTRUCTOR WITH ARGUEMENT"<<endl;;
        d=dt;
    }
    void show()
    {
        cout<<d<<endl;
    }
    void add(data d1 , data d2)
    {
        d=d1.d+d2.d;
    }

};
 
int main()
{
    data d1(12),d2(5),d3;   
    d3.add(d1,d2);
    d3.show();
    return 0;
}