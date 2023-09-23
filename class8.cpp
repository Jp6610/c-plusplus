#include<iostream>
using namespace std;
class bank{
    char name[20],acc_type[20];
    int a_no,amt,dep,with;
    public:
    void input(){
        cout<<"ENTER THE NAME";
        cin>>name;
        cout<<"ENTER THE ACCOUNT NUMBER";
        cin>>a_no;
        cout<<"ENTER THE TYPE OF ACCOUNT";
        cin>>acc_type;
        cout<<"ENTER THE INITIAL AMOUNT";
        cin>>amt;
    }
    void deposit();
    void withdraw();
    void display();
};

void bank::deposit()
{
    cout<<"ENTER THE DEPOSIT AMOUNT";
    cin>>dep;
    amt=amt+dep;
} 
void bank::withdraw()
{
    if(amt>=500){
    cout<<"ENTER THE WITHDRAW AMOUNT";
    cin>>with;
    amt=amt-with;
    }
    else cout<<"YOU CANNOT WITHDRAW";
}
void bank::display()
{
    cout<<"THE BALANCE IS"<<amt;
}

int main()
{
    int choice;
    bank b;
    do{
        cout<<"1.Input\n";
        cout<<"2.Deposit\n";
        cout<<"3.Withdraw\n";
        cout<<"4.Display\n";
        cout<<"5.Exit\n";
        cout<<"ENTER YOUR CHOICE";
        cin>>choice;

        switch(choice){
            case 1: b.input();
            break;

            case 2: b.deposit();
            break;

            case 3: b.withdraw();
            break;

            case 4: b.display();
            break;
            
            case 5: break;
        }
    }while(choice!=5);
    return 0;
}