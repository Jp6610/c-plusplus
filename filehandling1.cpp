#include<iostream>  //program to add multiple data
using namespace std;
#include<fstream>
 
int main()
{
    char data[100],j;
    int i=1;
    ofstream ot;
    ot.open("jj.txt");
    do
    {
        cout<<"ENTER NAME :";
        cin>>data;
        ot<<"NAME "<<"="<<data<<endl;
        cout<<"ENTER AGE :";
        cin.ignore();
        cin>>data;
        ot<<"AGE" <<"="<<data<<endl;
        cout<<"DO YOU WANT TO ADD MORE DATA?";
        cin>>j;
    } while (j=='y');
    ot.close();
    
    return 0;
}