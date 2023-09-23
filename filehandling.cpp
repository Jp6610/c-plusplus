#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
    // ofstream ofs;  //ofstream for writing and opening
    // ofs.open("cppfile.txt"); //opens the file . if not created beforehand then it creates it
    // ofs <<"Welcome to cdac";      //to write something in file
    ifstream fin;
    char ch;
    fin.open("cppfile.txt"); 
    while (!fin.eof())
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    return 0;
}