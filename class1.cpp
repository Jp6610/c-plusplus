#include<iostream>
using namespace std;
class testcase{
    private:
    int data;
    public:
    void set(int d)
    {
        data = d;
    }
    void show()
    {
        cout<<data<<endl;
    }
};
 
int main()
{
    testcase t;
    t.set(16);
    t.show();
    return 0;
}