#include<iostream> //sum of even numbers (pointer with arrays)
using namespace std;
 
int main()
{
    int numbers[50],*ptr;
    int n,i;
    cout<<"HOW MANY ELEMENTS ARE NEEDED?"<<endl;
    cin>>n;
    cout<<"ENTER THE NUMBERS ONE BY ONE"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    ptr = numbers; //here values of numbers are stored in ptr instead of the address
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
            sum=sum+*ptr;
        }
        ptr++;
    }
    cout<<"SUM OF EVEN NUMBERS IS :"<<sum<<endl;
    return 0;
}