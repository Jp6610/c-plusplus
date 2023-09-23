#include<iostream>
using namespace std;
 int swap(int *i,int *j) 
 {
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    
 }
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"BEFORE SWAPPING:a="<<a <<"b="<<b <<endl;
    swap(&a,&b);
    cout<<"AFTER SWAPPING:a="<<a <<"b="<<b;






    
    return 0;
}