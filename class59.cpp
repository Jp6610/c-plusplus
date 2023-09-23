#include<iostream>
using namespace std;
#include<string.h>
class person
{
    char name[20];
    float age;
    public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age=a;
    }
    person &person::greater(person &x)
    {
        
    }
};
 
int main()
{
    

    return 0;
}