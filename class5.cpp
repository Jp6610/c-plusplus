#include<iostream>
using namespace std;
class myclass{

    private:
    int x,n;
    public:
    void read()
    {
        cout<<"ENTER X:";
        cin>>x;
        cout<<"ENTER N:";
        cin>>n; 

    }
    void show()
    {
        float upper=1,lower=1,i;
        float sum=0;
        for(i=1;i<=n;++i)
        {
            upper=upper*x;
            lower=lower*i;
            sum=sum+ upper/lower;
        }
        cout<<"THE SUM IS :"<<sum;
        
    }
};
 
int main()
{
    myclass s;
    s.read();
    s.show();
    return 0;
}