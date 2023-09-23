// #include<iostream>
// using namespace std;  //area of circle using class using the variables in main()

// class circle
// {
//     private:
//     int r;
//     float a=0;
//     public:
//     void putdata(int j)
//     {
//        r=j;
//     }
//     float area()
//     {
//         a=(float)3.14*r*r;
//         return(a);
        
//     }
// };
 
// int main()
// {
//     int r,a;
//     cout<<"ENTER THE RADIUS OF CIRCLE:";
//     cin>>r;
//     circle f;
//     f.putdata(r);
//     cout<<"THE AREA OF CIRCLE IS : "<<f.area();
    
//     return 0;
// }
#include<iostream>  //area of circle without using variables from main()
#include<math.h>
using namespace std;
class circle
{
    float r,area;
    public:
    void putdata()
    {

        cout<<"ENTER THE AREA OF CIRCLE :";
        cin>>r;
    }
    void getdata()
    {
        area=(float)3.14*r*r;
        cout<<"THE AREA OF CIRCLE IS : "<<area<<endl;
    }
};
int main()
{
    circle f;
    f.putdata();
    f.getdata();
    return 0;
}