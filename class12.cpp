#include<iostream>   //friend function
using namespace std;
class sample
{
    int a,b;
    public:
    void setvalue()
    {
        a=20;b=30;
    }
    friend float mean(sample s); //using friend function

};
float mean(sample s)
{
    cout<<"FIRST VALUE:"<<s.a<<endl;
    cout<<"SECOND VALUE:"<<s.b<<endl;
    return (s.a+s.b)/2;

}
 
int main()
{
    sample x;
    x.setvalue();
    cout<<"MEAN VALUE:"<<mean(x);
    return 0;
}