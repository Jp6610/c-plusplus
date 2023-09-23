#include<iostream> //program to overload the function in A class b which is derived class of A and print the value of the variable
using namespace std;
class a
{
    public:
    int fun(int i)
    {return i+1;}
};
class b
{
    public:
    float fun(float f)
    {
        return f+10;
    }
};
 
int main()
{
    b b1;
    float j=b1.fun(23.56);
    cout<<j<<endl;
    a a1;
    int h=a1.fun(15);
    cout<<h<<endl;
    return 0;
}