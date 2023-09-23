#include<iostream> //fibonacci series usong c++
using namespace std; //practice
class fibo
{
    private:
    int a,b,c,n;
    public:
   
    void getdata(int a,int b,int c,int n)
    {
        cout<<"ENTER THE TOTAL NUMBERS :";
        cin>>n;
        cout<<a<<"\t"<<b;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            
            cout<<"\t"<<c<<"\t";
            a=b;b=c;

        }
    }
    

};
 
int main()
{
    int a=0,b=1,c=0,n;
    fibo f1;
    f1.getdata(a,b,c,n);
    
    return 0;
}