#include<iostream>
using namespace std;
class binary
{
    int num;
    public:
    void set(int m)
    {
        num=m;
    }
    void show()
    {
        cout<<num<<endl;
    }
    binary operator+(binary t2)
    {
        binary temp;
        temp.num=num+t2.num;
        return temp;
    }
    binary operator -(binary t2)
    {
        binary temp;
        temp.num=num-t2.num;
        return temp;
    }
    binary operator *(binary t2)
    {
        binary temp;
        temp.num=num*t2.num;
        return temp;
    }
    binary operator /(binary t2)
    {
        binary temp;
        temp.num=num/t2.num;
        return temp;
    }
        
        
};
 
int main()
{
    binary b1,b2,b3;
    b1.set(8);
    b2.set(4);
    b3=b1+b2;
    b3.show();
    b3=b1-b2;
    b3.show();
    b3=b1*b2;
    b3.show();
    b3=b1/b2;
    b3.show();


    

    return 0;
}