#include<iostream>
using namespace std;
class ovl
{
    int a;
    public:
    ovl();
    ovl(int );
    friend void operator++(ovl &);
    void disp(ovl);
};
ovl::ovl()
{
    a=10;
}
ovl::ovl(int j)
{
    a=j;
}
void operator++(ovl &x)
{
    x.a=x.a+1;
}
void ovl::disp(ovl x)
{
    cout<<"a = "<<x.a;
}
 
int main()
{
    ovl x;
    ++x;
    x.disp(x);
    return 0;
}