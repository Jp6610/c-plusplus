#include<iostream> 
#include<string.h> //program for constructors with new
using namespace std;
 class strin
 {
    char *name;
    int length;
    public:
    strin()
    {
        length = 0;
        name = new char[length+1];
    }
    strin(char *s)
    {
        length =strlen(s);
        name =new char[length+1];
        strcpy(name,s);

    }
    void display()
    {
        cout<<name<<"\n";
    }
    void join(strin &a,strin &b);
 };
    void strin :: join(strin &a,strin &b)
 {
    length = a.length + b.length;
    delete name;
    name = new char[length];
    strcpy(name,a.name);
    strcat(name,b.name);

 }
int main()
{
    char *first="Joseph";
    strin name1(first),name2("Louis"),name3("Langrage"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    cout<<"\n";
    s1.display();
    cout<<endl;
    s2.display();
    return 0;
}