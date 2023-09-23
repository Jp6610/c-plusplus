#include<iostream>//program to arithmetic operations of pointers
using namespace std;

 
int main()
{
    int num[]={56,75,22,18,90};
    int *ptr,i;
    cout<<"THE ARRAY VALUES ARE: \n";
    for(i=0;i<5;i++)
    cout<<num[i]<<endl;
    ptr=num; // values of num are stored in pointer instead of its addrress
    cout<<"THE VALUE OF ptr:"<<*ptr<<endl;
    ptr++;
    cout<<"THE VALUE OF ptr++:"<<*ptr<<endl;
    ptr--;
    cout<<"THE VALUE OF ptr--:"<<*ptr<<endl;
    ptr=ptr+2;
    cout<<"THE VALUE OF ptr:"<<*ptr<<endl;
    ptr=ptr-1;
    cout<<"THE VALUE OF ptr-1:"<<*ptr<<endl;
    ptr=ptr+3;
    cout<<"THE VALUE OF ptr+3:"<<*ptr<<endl;
    ptr=ptr-2;
    cout<<"THE VALUE OF ptr-2:"<<*ptr<<endl;
    

    return 0;
}