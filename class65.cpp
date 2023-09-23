#include<iostream> //program for virtual function
using namespace std;
class BC
{
    public:
    int b;
    void show()
    {cout<<"B = "<<b<<endl;}
};
class DC:public BC
{
    public:
    int d;
    void show()
    {
        cout<<"b ="<<b<<endl;
        cout<<"d ="<<d<<endl;
    }
};
 
int main()
{
    BC *bptr; //base pointer
    BC base;
    bptr=&base; //base address

    bptr->b=100; //access BC via base pointer
    cout<<"bptr points to base object \n";
    bptr->show();
    DC derived; //address of derived object
    bptr=&derived;
    bptr->b=200; //accedd DC via base pointer


    //*bptr->d=300; it wont work;


    cout<<"bptr now points to derived object\n";
    bptr->show(); //bptr now points to derived object 
    //accessing d using a pointer of type derived class DC

    DC *dptr; //derived type pointer
    dptr=&derived;
    dptr->d=300;
    dptr->show(); 
    cout<<"using ((DC *)bptr)\n";
    ((DC *)bptr)->d=400;
    ((DC *)bptr)->show();
    return 0;
}