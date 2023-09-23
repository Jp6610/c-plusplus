#include<iostream> //celsuis to fahrenheit
using namespace std;
class convert
{
    float f,c;
    public:
    void getdata();
    void putdata();
};
void convert::getdata()
{
    cout<<"ENTER THE TEMPERATURE IN CELSIUS:";
    cin>>c;
}
void convert::putdata()
{
    
    f= (c * 1.8) + 32;
    cout<<"THE TEMPERATURE IN FAHRENHEIT IS :"<<f<<endl;

}
int main()
{
    
    convert s;
    s.getdata();
    s.putdata();
    return 0;
}