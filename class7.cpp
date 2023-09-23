#include<iostream>
using namespace std;
class set{
    int a,b;
    public:
    void getdata();
    void putdata();
    int largest();
};
void set::getdata()
{
    cout<<"ENTER THE VALUE A:";
    cin>>a;
    cout<<"ENTER THE VALUE B:";
    cin>>b;
}
void set::putdata()
{
    cout<<"THE LARGETS NUMBER IS :"<<largest(); //nesting 
}
int set::largest()
{
    if(a>b)
    return a;
    else if(a<b)
    return b;
    else cout<<"NUMBERS ARE SAME";
 
}
 
int main()
{
    set k;
    k.getdata();
    k.putdata();
    return 0;
}