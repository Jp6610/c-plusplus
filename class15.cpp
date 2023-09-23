#include<iostream>
using namespace std;   //area of circle using friend 
class jp
{
  int a;
  public:
  void input(int i)
  {
    a=i;
  }
  friend float area(jp s);
    
    
};
float area(jp s)
{
    cout<<"THE AREA OF CIRCLE IS";

    cout<<(s.a)*3.14 <<endl;
    return 0;
    
}

int main()
{
    int r;
    cout<<"ENTER THE RADUIS";
    cin>>r;

    jp c;
    c.input(r);
    area(c);
    return 0;
} 