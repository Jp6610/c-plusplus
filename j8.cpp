#include<iostream>
using namespace std;   //fibonacci series
 
int main()
{
    int n,a=0,b=1,c,i,j;
    cout<<"Enter the total number"<<endl;
    cin>>n;
    cout<<a<<"\t"<<b<<"\t";
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"\t";

    }

    return 0;
}