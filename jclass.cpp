#include<iostream>
using namespace std;
class testclass{
    private:
    int a=10;
    public:
    void demo()
    {
        cout<<a;
    }
};
 
int main()
{
    testclass ob;
    ob.demo();
    return 0;
}