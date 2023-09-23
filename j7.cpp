#include<iostream>
using namespace std;
 
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    cout <<"ENTER THE VALUE OF FIRST MATRIX\n";
    for(i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];

        }
    }
cout<<"ENTER THE VALUE OF SECOND MATRIX"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }  
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"SUM MATRIX IS:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }



    return 0;
}