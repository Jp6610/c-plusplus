#include<iostream>  //concatenate two strings objects using operator overloading
#include<string.h>
using namespace std;

class strin
{
    char str[80];
    public:
    strin()
    {
        strcpy(str," ");
    }
    strin(char s[80])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str<<endl;
    }
    strin operator+(strin s)
    {
        if(strlen(s.str)+strlen(str)<80)
        {
            strin temp;
            strcpy(temp.str,str);
            strcat(temp.str,s.str);
            return temp;
        }
        else
        {
            cout<<"RESULTANT STRING IS TOO LARGE";
        }
    }
};
 
int main()
{
    strin s1("A GOOD PROGRAMME"),s2("TO LEARN STRINGS"),s3;
    s3=s1+s2;
    s3.display();

    return 0;
}