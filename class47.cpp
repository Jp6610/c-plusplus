#include<iostream> //program for hybrid inheritance
using namespace std;
class parent
{
    protected:
    char father1[20],mother1[20];
    public:
    void getdata()
    {
        cout<<"ENTER FATHER NAME : ";
        cin>>father1;
        cout<<"ENTER MOTHER NAME : ";
        cin>>mother1;
    }
};
class child1:public parent{
    protected:
    char children1[20];
    public:
    void getdata()
    {
        parent::getdata();
        cout<<"Enter first child name : ";
        cin>>children1;

    }
};
class child2
{
    protected:
    char children2[20];
    char father2[20],mother2[20];
    public:
    void getdata()
    {

        cout<<"ENTER FATHER NAME : ";
        cin>>father2;
        cout<<"ENTER MOTHER NAME : ";
        cin>>mother2;
        cout<<"Enter second child name :";
        cin>>children2;
    }
};
class son:public child1,public child2
{
    protected:
    char son[20];
    public:
    void getdata()
    {
        child1::getdata();
        child2::getdata();
        cout<<"ENTER SON NAME :";
        cin>>son;
        cout<<"-------------------------";

    }

void display()
{
    cout<<"\nENTER FATHER NAME :"<<father1<<endl;
    cout<<"\nENTER MOTHER NAME :"<<mother1<<endl;
    cout<<"\nENTER FIRST CHILD NAME :"<<children1<<endl;
    cout<<"\nENTER FATHER NAME :"<<father2<<endl;
    cout<<"\nENTER MOTHER NAME :"<<mother2<<endl;
    cout<<"\nENTER SECOND CHILD NAME :"<<children2<<endl;
    cout<<"ENTER SON NAME : "<<son;



}
};
 
int main()
{
    son m;
    m.getdata();
    m.display();

    return 0;
}