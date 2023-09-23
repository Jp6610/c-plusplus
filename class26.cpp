#include<iostream>  //inheritance
using namespace std;
class base{
    protected:
    int x;
    public:
    base()
    {
        cout<<"Base class constrictor";
        x=0;
    }
    void plus()
    {
        x++;
    }
    void showbase()
    {
        cout<<"\n\nx="<<x<<endl;

    }
};
class derv : public base
{
    private:
    int y;
    public:
    derv():base()
    {
        cout<<"DERIVED CLASS CONSTRUCTOR\n";
        y=0;
    }
    void minus()
    {
        x--;
        y--;
    }
    void showderv()
    {
        cout<<"\n\ny = "<<y<<endl;
    }
};
 
int main()
{
    derv obj;
    obj.plus(); //x++
    obj.plus();//x++
    obj.plus();//x++
    obj.minus();//x++ and y--
    obj.showbase();
    obj.showderv();

    return 0;
}