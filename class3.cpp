#include<iostream>   //to find the average of numbers
using namespace std;
 class no{
    int n;
    int arr[10];
    int i;
    public:
    void sc()
    {
    
        cout<<"ENTER THE TOTAL NUMBERS YOU WANT";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    float avg()
    {
        float sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
        
        }
        return sum/n;
    }
 };
int main()
{
    no hi;
    hi.sc();
    cout<<"Average="<<hi.avg();

    return 0;
}