#include<iostream> //program fr overloading comparison operator > and ==
using namespace std;
class data
{
    int d;
    public:
    data()
    {
        d=0;
    }
    data(int dt)
    {
        dt=0;
    }
    int operator>(data obj)
    {
        if(d>obj.d)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int operator==(data obj)
    {
        if(d==obj.d)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

};
 
int main()
{
    data t1(43),t2(20);
    if(t1==t2)
    {
        cout<<"NUMBERS ARE EQUAL";
    }
    else if(t1>t2)
    {
        cout<<"Greater";
    }
    else{
        cout<<"smaller";
    }
        
    return 0;
}