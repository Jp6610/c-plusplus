#include<iostream>   //program to use scope resolution operator
using namespace std;       
int n=23;
 
int main()
{
    int n=1;
    cout<<"Global"<<::n<<endl; //to print the value of global variable use ::
    cout<<"Local"<<n<<endl; //printing the valu of local variable
    
    return 0;
}