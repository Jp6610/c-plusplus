#include<iostream>
using namespace std;
class abc;   //friendly to two classes
class xyz
{
    int x;
    public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void max(xyz ,abc);
};
class abc
{
    int a;
    public:
    void setvalue(int i)
    {
        a=i;
    }
    friend void max(xyz, abc);

};
void max(xyz m,abc n)
{
    if(m.x >= n.a)
    cout<<m.x;
    else
    cout<<n.a;

}
 
int main()
{
    cout<<"Max ";
    xyz jp;
    jp.setvalue(10);
    abc rk;
    rk.setvalue(20);
    max(jp,rk);
    return 0;
}