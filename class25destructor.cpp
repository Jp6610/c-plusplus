#include<iostream>  //use of destructor
using namespace std;
class myclass{
    int t;
    public:
    myclass()
    {
        cout<<"THIS IS A CONSTRUCTOR\n";
    }
    ~myclass()
    {
        cout<<"THIS IS A DESTRUCTOR\n";
    }
    void set(int d)
    {
        t=d;
    }
    void show()
    {
        cout<<t<<endl;
    }
};
 
int main()
{
    myclass m1,m2;
    m1.set(12);
    m2.set(123);
    m1.show();
    m2.show();
    
    return 0;
}