#include<iostream>
using namespace std;
class date
{
    private:
    int dd;
    int mm;
    int yy;
    public:
    date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    void display()
    {
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }

};
 
int main()
{
    date d(16,3,2005);
    d.display();
    return 0;
}