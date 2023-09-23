#include<iostream>
#include<math.h>  //to find the square root without taking the variables in main()
using namespace std;
class sq
{
    private:
    float s,j;
    public:
    float value()
    {
        cout<<"ENTER THE NUMBER YOU WANT THE SQUARE ROOT OF :";
        cin>>s;
        j=sqrt(s);
        cout<<"THE SQAURE ROOT IS :"<<j;
        return 0;
    }

};
 
int main()
{
    sq t;
    t.value();
    return 0;
}