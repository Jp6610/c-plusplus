#include<iostream> // to create a time class that store the hours,minutes and seconds . overload the + operator so that the user can add two times.
using namespace std;
class time
{
    int h,m,s;
    public:
    time();
    time(int ,int,int);
    time operator +(time(&));
    void gettime();
    void puttime();
};
time ::time()
{
    h=m=s=0;
};
time::time(int hr,int mt,int sec)
{
    h=hr; m=mt;s=sec;
}
void time::gettime()
{
    do{
        cout<<"ENTER THE HOURS :->";
        cin>>h;
        cout<<"\nENTER THE MINUTES :->";
        cin>>m;
        cout<<"ENTER THE SECONDS :->";
        cin>>s;
        

    }while(h>11&&m>=59&&s>=59);
}
void time::puttime()
{
    cout<<"THE TIME IS :->"<<h<<":"<<m<<":"<<s;
}
time time :: operator+(time &t1)
{
    time temp;
    temp.h=h+t1.h;
    temp.m=m+t1.m;
    temp.m++;
    temp.s-60;
    if(temp.s>59)
    {
        temp.m++;
        temp.s==60;
    }
    if(temp.m>59)
    {
        temp.h++;
        temp.m-=60;
    }
    return temp;

}
int main()
{

    time t,tt;
    t.gettime();
    t.puttime();
    cout<<"\nENTER THE SECOND TIME:";
    tt.gettime();
    time t3;
    t3=t+tt;
    t3.puttime();
    return 0;
}