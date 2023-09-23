#include<iostream> // Q. 82 program for array of pointers to objects
#include<string.h>
using namespace std;
class city
{
    protected:
    char *name;
    int len;
    public:
    city()
    {
        len=0;
        name=new char[len+1];
    }
    void getname()
    {
        char *s;
        s=new char[30];
        cout<<"ENTER CITY NAME:";
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void printname()
    {
        cout<<name<<endl;
    }
};
 
int main()
{
    city *cptr[10];
    int n=1;
    int option;
    do
    {
        cptr[n]=new city;
        cptr[n]->getname();
        n++;
        cout<<"DO YOU WANT TO ENTER ONE MORE NAME? "<<endl;
        cout<<"ENTER 1 FOR YES 0 FOR NO :";
        cin>>option;
    } while (option==1);
    cout<<"\n\n";
    for(int i=1;i<=n;i++)
    {
        cptr[i]->printname();
    }
    
    return 0;
}