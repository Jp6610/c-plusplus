#include<iostream>
using namespace std; //practice
class file
{
    private:
    int data;
    public:
    void getdata()
    {
        data=0;
    }
    void putdata(int dt)
    {
        dt=data;
        cout<<"THE VALUE IS :"<<data<<endl;
    }
    void readdata()
    {
        cout<<"ENTER THE VALUE :\n";
        cin>>data;
    }
    
};
 
int main()
{
    int dt;
    file f;
    f.getdata();
    f.readdata();
    f.putdata(dt);
    return 0;
}