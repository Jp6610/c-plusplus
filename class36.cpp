#include<iostream> // Q61 to find area of circle which have different radius, with the use of operator iverloading fine which cricle's area greater
using namespace std;
#define PI 3.14
class circle
{
    int radius;
    public:
    circle(int r)
    {
        radius=r;
    }
    float area()
    {
        return PI*radius*radius;
    }
    int operator>(circle t)
    {
        if(radius>t.radius)
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
    circle c1(10),c2(20);
    cout<<"Area of Circle C1 : ";
    cout<<c1.area()<<endl;
    cout<<"Area of Circle C2 : ";
    cout<<c2.area()<<endl;
    if(c1>c2)
    {
        cout<<"Area of cirlce C1 us Greater than C2";
    }
    else
    cout<<"Area of Circle C2 is Greater than C1";
    



    return 0;
}