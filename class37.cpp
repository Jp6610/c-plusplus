#include<iostream> //program to show the use of friend function and operator overloading
using namespace std;
class height
{
    int feet;
    float inch;
    public:
    height()
    {
        feet=inch=0;
    }
    height(int f,float i)
    {
        feet=f;
        inch=i;
    }
    height(float t)
    {
        feet =(int)t;
        inch=12*(t-feet);
    }
    void show()
    {
        cout<<"Feet="<<feet<<"\tInch="<<inch<<endl;
    }
    friend height operator+(height h1,height h2)
    {
        height temp;
        temp.feet=h1.feet+h2.feet;
        temp.inch=h1.inch=h2.inch;
        if(temp.inch>=12)
        {
            temp.inch-=12;
            temp.feet++;
        }
        return temp;
        
    }
        
};
 
int main()
{
    height h1(10,15),h2;
    h2=15.5+h1;
    h2.show();   
    return 0;
}