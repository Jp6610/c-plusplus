#include<iostream>
using namespace std;
#include<fstream>
#include<ctype.h>
 
int main()
{
    ifstream fin;
    fin.open("cppfile.txt");
    ofstream fout;
    fout.open("sample.txt");
    char ch;

    while(!fin.eof())
    {
        fin.get(ch);
        fout<<ch;
    }
    return 0;
}