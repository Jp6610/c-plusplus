#include<iostream>   //create bank and calculate fixed deposit according to the rate define with dynamic intialization of constructions
using namespace std;
class deposit{
    long int amount;
    int year;
    float rate,value;
    public:
    deposit(){}
    deposit(long int p, int y, float r=0.12);
    deposit(long int p, int y, int r);
    void display();
};
    
deposit:: deposit(long int p, int y, float r){
    amount =p;
    year=y;
    rate=r;
    value=amount;
    for(int i=1;i<=y;i++)
    {
        value=value*(i+r);
    }
}
deposit::deposit( long int p, int y, int r)
{
    amount =p;
    year=y;
    rate=r;
    value=amount;
    for(int i=1;i<=y;i++)
    {
        value=value*(1+float(r)/100);
    }
}
void deposit:: display()
{
    cout<<"\nPRINCIPAL AMOUNT : "<<amount<<endl<<"RETURN VALUE :"<<value<<endl;

}
 
int main()
{
   deposit d1,d2,d3;
   long int p;
   int y;
   float r;
   int k;
   cout<<"ENTER THE AMOUNT,PERIOD,INTEREST : \n";
   cin>>p>>y>>r;
   d1=deposit(p,y,k);
   cout<<"ENTER THE AMOUNT,PERIOD,INTEREST : \n";
   cin>>p>>y>>r;
   d2=deposit(p,y,k);

   cout<<"ENTER THE AMOUNT,PERIOD : \n";
   cin>>p>>y;
   d3=deposit(p,y);
   cout<<"\nDEPOSIT 1:";
   d1.display();
   cout<<"\nDEPOSIT 2:";
   d1.display();

   cout<<"\nDEPOSIT 3:";
    d3.display();


    return 0;
}