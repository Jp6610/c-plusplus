#include<iostream>
using namespace std;
 class dataentry{
    private:
    int *value;
    int num;
    public:
    dataentry(); //constructor declared
    void readvalue();  //read value
    int getsum();  //find and returns thesum of values
    int getnum() 
    { 
        return num;  //returns the number of values
    }
 };
 dataentry::dataentry()
 {
    cout<<"HOW MANY VALUES YOU WANT TO ENTER : ";
    cin>>num;
    value= new int[num];  //new keyword is used to allocate memory
 }
 void dataentry::readvalue()      
 {
    for(int i=0; i<num;i++)
    {
        cout<<"ENTER THE VALUE "<<i+1<<" :";  //taking the value
        cin>>value[i];
    }
 }
 int dataentry:: getsum()       //sum of the numbers
 {
    int sum=0;
    for(int i=0;i<num;i++)
    {
        sum+=value[i];
        
    }
    return sum;
 }
 float getavg(dataentry n)  //function having dataentry as an arguement
 {
    float average;
    average=n.getsum()/n.getnum();
    return average;
 }

int main()
{
    dataentry d;
    d.readvalue();
    cout<<"\nSUM OF THE VALUES: "<<d.getsum()<<endl;
    cout<<"\nAVERAGE IS : "<<getavg(d);
    return 0;
}