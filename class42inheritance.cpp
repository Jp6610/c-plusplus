#include<iostream> //use of inheritance
using namespace std;
class base
{
    protected:
    int x;
    public:
    void plus()
    {
        x++;
    }
    void show()
    {
        cout<<x<<endl;
    }


};

class derv:public base
{
    public:
    derv()
    {
        x=0;
    }
    void minus()
    {
        x--;
    }


};
 
int main()
{
    derv obj;
    obj.plus();
    obj.plus();
    obj.plus();
    obj.minus();
    obj.show();

    

    return 0;
}