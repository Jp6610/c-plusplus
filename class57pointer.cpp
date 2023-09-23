#include<iostream> //program to manipulation of pointers
using namespace std;
 
int main()
{
    int a=10,*ptr;
    ptr=&a;
    cout<<"THE VALUE OF a = "<<a<<endl;
    *ptr=*ptr/2;
    cout<<"THE VALUE OF a/2 = "<<*ptr<<endl;
    cout<<"THE VALUE OF ptr = "<<ptr<<endl;
    cout<<"THE VALUE OF ptr = "<<&a<<endl;
    cout<<"THE VALUE OF a/2 = "<<*&a<<endl;



    return 0;
}