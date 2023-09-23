#include<iostream> //program to count number of lines
using namespace std;
#include<fstream>
#include<ctype.h>
int main()
{
    ifstream fin;
    fin.open("cppfile.txt");
    char str[80];
    int count = 0;
    while(!fin.eof())
    {
        fin.getline(str,80);
        count++;
    }
    cout<<"NUMBER OF LINES: "<<count;
    fin.close();
    return 0;
}