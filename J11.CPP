#include<iostream>
using namespace std;
int simple(float p, float r, float n)
{
    float simp;
    simp=(p*r*n)/100;
    cout<<"THE SIMPLE INTEREST IS:"<<simp;
    return simp;
}
 
int main()
{
    float p,r,n,t;
    cout<<"ENTER THE PRINCIPLE AMOUNT\n";
    cin>>p;
    cout<<"ENTER THE RATE OF INTEREST\n";
    cin>>r;
    cout<<"ENTER THE TIME\n";
    cin>>n;
    t = simple(p,r,n);
    cout<<"\nTHE TOTAL AMOUNT IS "<<t+p;
    return 0;
}