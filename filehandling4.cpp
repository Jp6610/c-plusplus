#include<iostream> //program to count upper,lower and other character
using namespace std;
#include<fstream>
#include<ctype.h>
void upper();
int main()
{
    upper();
    return 0;
}
void upper()
{
   ifstream fin;
   fin.open("cppfile.txt");
   char ch;
   int up=0,lw=0,ot=0;
   while(!fin.eof())
   {
    fin.get(ch);
    if(isupper(ch)) up++;
    else if(islower(ch)) lw++;
    else ot++;

   } 
   cout<<"UPPER = "<<up<<endl;
   cout<<"LOWER = "<<lw<<endl;
   cout<<"OTHERS = "<<ot<<endl;
}