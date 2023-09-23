#include<iostream>
using namespace std;
class fibonacci{
    private:        //to generate fibonacci series
    int n;
    public:
    void generate(int m)
    {
        n=m;
        int i,t1=0,t2=1,t3;
        cout<<t1 <<"\t" <<t2;
        for(i=2;i<n;i++)
        {
            t3=t1+t2;
            cout<<"\t"<<t3;
            t1=t2;
            t2=t3;

        }
    }

};
 
int main()
{
    fibonacci f;
    f.generate(5);
    
    return 0;
}