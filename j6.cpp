#include<iostream>
using namespace std;
 
int main()
{
    int i,j,n,temp,a[10];
    cout<<"ENTER THE TOTAL NUMBER OF ELEMENTS IN THE ARRAY\n";
    cin>>n;
    cout<<"NOE ENTER THE NUMBERS\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    cout<<"THE ASCENDING ORDER IS: \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"THE DESCENDING ORDER IS: \n";

    for(j=n-1;j>=0;j--)
    {
        cout<<a[j]<<endl;
    }

    return 0;
}