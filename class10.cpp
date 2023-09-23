#include<iostream>       //addition of time
using namespace std;
class time{
    int hours,minutes;
    public:
    void gettime(int n,int m)
    {
        hours=n;
        minutes=m;
    }
    void putdata()
    {
        cout<<hours<<"Hours"<<minutes<<"Minutes"<<endl;
    }
    void sum(time t1,time t2); //here we have used whole object as arguement because we want to use minutes and hours multiple times in this function
};
void time::sum(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;

}
 
int main()
{
    time T1,T2,T3;
    T1.gettime(3,20);
    T2.gettime(4,55);
    T3.sum(T1,T2);
    cout<<"T1 = ";
    T1.putdata();
    cout<<"T2 = ";
    T2.putdata();
    cout<<"SUM OF TIME = ";
    T3.putdata();

    return 0;
} 