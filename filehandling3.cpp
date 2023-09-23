#include<iostream> //multiplication table
using namespace std;
#include<fstream>
#include<ctype.h>
void table();
 
int main()
{
    table();
    return 0;
}
void table()
{
    ofstream fin;
    fin.open("BOOK.txt");
    int n,j;
    cout<<"ENTER THE TABLE U WANT TO SHOW:";
    cin>>n;
    for(j=1;j<=10;j++)
    {
        fin<<n<<"*"<<j<<"="<<n*j<<endl;
    }
    cout<<"CHECK YOUR FILE:";
}