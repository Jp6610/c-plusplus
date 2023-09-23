#include<iostream>    //Q.47 CONSTRUCT  A M * N MATRIX AND FIND THE (1,2) ELEMENT OF THE MATRIX CLASS
using namespace std;
 class matrix
 {
    int **p;
    int d1,d2;
    public:
    matrix(int x,int y);
    void get(int i,int j,int value)
    {
        p[i][j]=value;
    }
    int &put(int i,int j)
    {
        return p[i][j];
    }

 };
 matrix :: matrix(int x,int y)
 {
    d1=x;
    d2=y;
    p=new int *[d1];
    for(int i=0;i<d1;i++)
    {
        p[i]=new int [d2];
    }
 }
int main()
{
    int m,n;
    cout<<"ENTER THE MATRIX ROW : ";
    cin>>m;
    cout<<"ENTER THE MATRIX COLOUMN : ";
    cin>>n;
    matrix A(m,n);
    cout<<"ENTER THE MATRIX VALUE: ";
    int i,j,value;
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {
            cin>>value;
            A.get(i,j,value);
        }

    }
    cout<<"\n FIRST ROW AND SECOND COLOUMN VALUE IS : ";
    cout<<A.put(1,2);



    return 0;
}