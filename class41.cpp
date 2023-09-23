#include<iostream> //program of cllass to represent a vector including memeber function 
#include<stdio.h>
#include<conio.h>
using namespace std;
const int size=23;
class vector
{
    int v[size];
    public:
    vector();
    vector(int *x);
    friend vector operator *(int a,vector b);
    friend vector operator *(vector b, int a);
    friend istream & operator>>(istream&,vector &);
    friend ostream & operator<<(ostream&,vector &);

};
vector ::vector()
{
    for(int i=0;i<size;i++)
    {
        v[i]=0;
    }
}
vector :: vector(int *x)
{
    for(int i=0;i<size;i++)
    { v[i]=x[i];}
}
vector operator *(int a,vector b)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
}

vector operator *(vector b, int a)
{
    vector c;
    for(int i=0;i<size;i++)
    {
        c.v[i]=b.v[i]*a;
    }
    return c;
}
istream & operator>>(istream &k,vector &b)
{
    for(int i=0;i<size;i++)
    {
        k>>b.v[i];
    }
    return k;
}
ostream & operator<<(ostream &m,vector &b)
{
    for(int i=0;i<size;i++)
    {
        m<<","<<b.v[i];
    }
    m<<")";
    return m;
}
int x[size]={2,4,6};

int main()
{
    vector d;
    vector e=x;
    cout<<"ENTER ELEMENT OF VECTOR : "<<endl;
    cin>>d;
    cout<<endl;
    cout<<"D : "<<d;
    vector p,q;
    p=2*d;
    q=e*2;
    cout<<endl;
    cout<<"P : "<<p<<endl;
    cout<<"Q : "<<q<<endl;
    return 0;
}