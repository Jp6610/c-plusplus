#include<iostream>
using namespace std;//covert string from lowercase to uppercase
class strig
{
    private:
    char *str;
    public:
    void read()
    {
        cout<<"ENTER STRING:";
        cin>>str;
    }
    void show()
    {
        cout<<str<<endl;
    }
    void convert()
    {
        int i;
        for(i=0;i!=*(str+i);i++)
        {
            if(*(str+i)>='a'&&*(str+i)<='z')
            {
                *(str+i)-=32;
            }
        }
    }
};
 
int main()
{
    strig s1;
    s1.read();
    s1.convert();
    s1.show();       
    return 0;
}