#include<iostream> //defining a class for furniture with color,width, and heights as data member. Get the details from the user and display it.
using namespace std;
class furniture
{
    protected:
    char *color;
    int width,height;
    public:
    furniture(char *,int ,int);
    char *getcolor()
    {
        return color;
    }
    int getwidth(){return width;}
    int getheight(){return height;}
};
furniture::furniture(char *co,int wi,int hi)
{
    color=co;
    width=wi;
    height=hi;
}
class shell:public furniture
{
    int shelves;
    public:
    shell(char *,int ,int ,int);
    int getshelves()
    {
        return shelves;
    }
    void display();
};
shell::shell(char *co,int wi,int hi,int s):furniture(co,wi,hi)
{
    shelves=s;
};
void shell::display()
{
    cout<<"\n\nTHE COLOR IS: "<<color<<endl;
    cout<<"\n\nTHE WIDTH IS: "<<width<<endl;
    cout<<"\n\nTHE HEIGHT IS: "<<height<<endl;
    cout<<"\n\nTHE NO. SHELVES IS : "<<shelves<<endl;

    

}
int main()
{
    char *col;
    col="green";
    
    int wid,hei,no_of_shell;
    cout<<"ENTER THE COLOR OF THE SHELL : "<<col<<endl;
   
    cout<<"\nENTER THE WIDTH OF THE SHELL : ";
    cin>>wid;
    cout<<"ENTER THE NUMBER OF THE SHELL : ";
    cin>>no_of_shell;
    cout<<"ENTER THE HEIGHT OF THE SHELL : ";
    cin>>hei;

    shell s(col,wid,hei,no_of_shell);
    s.display();
    
    return 0;
}