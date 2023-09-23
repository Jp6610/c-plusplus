#include<iostream> //Q.6  to count the words in a file
using namespace std;
#include<fstream>
#include<ctype.h> 
void word();
int main()
{
    word();
    return 0;
}
void word()
{
    ifstream fin;
    fin.open("cppfile.txt");
    char ch;
    int w=1;

    while(fin)
    {
        fin.get(ch);
        if(ch==' ')
        {
            w++;
        }
    }
    cout<<"WORD = "<<w;
}
