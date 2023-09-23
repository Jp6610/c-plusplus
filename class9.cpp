#include<iostream>
using namespace std;  //storing the details of employee and then display
class employee{
    char name[20];
    float age;
    public:
    void getdata();
    void putdata();
};
void employee::getdata(){
    cout<<"ENTER NAME:";
    cin>>name;
    cout<<"ENTER AGE:";
    cin>>age;
}
void employee::putdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age"<<age<<endl;
}
 
int main()
{
    int i;
    employee manager[3];
    for(i=0;i<3;i++)
    {
        cout<<"Details of Manager:"<<i+1<<endl;
        manager[i].getdata();
    }
    for(i=0;i<3;i++)
    {
        cout<<endl;
        cout<<"Manager"<<i+1<<endl;
        manager[i].putdata();
        cout<<endl;
    }
    
    return 0;
}