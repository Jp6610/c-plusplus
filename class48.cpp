#include<iostream> //program for creating class student store the roll no,class test stores the marks obtained in 2 subjects and class results
using namespace std;
class student
{
    protected:
    int rollno;
    public:
    void getno(int);
    void putno();

};
void student::getno(int a)
{
    rollno=a;
}
void student::putno()
{
    cout<<"ROLL NO : "<<rollno<<endl;
}
class test:public student
{
   protected:
   float sub1,sub2;
   public:
   void getmarks(float ,float);
   void putmarks();

};
void test::getmarks(float x,float y)
{
    sub1=x;
    sub2=y;
}
void test::putmarks()
{
    cout<<"SUB 1 MARKS : "<<sub1<<endl;
    cout<<"SUB 2 MARKS : "<<sub2<<endl;

}
class result:public test
{
    float total;
    public:
    void  display();

};
void result::display()
{
    total=sub1+sub2;
    putno();
    putmarks();
    cout<<"TOTAL : "<<total<<endl;
};
int main()
{
    result student1;
    student1.getno(999);
    student1.getmarks(75,59);
    student1.display(); 
    return 0;
}