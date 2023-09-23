#include<iostream>//program to count characters in file
using namespace std;
#include<fstream>
#include<ctype.h>
 
int main()
{
    ifstream fin;
    fin.open("cppfile.txt"); 
    char ch;
    int count=0;
    while(!fin.eof())
    {
        fin.get();
        count++;
    }
    cout<<"NUMBER OF CHARACTERS IS :"<<count<<endl;
    fin.close();

    return 0;
}