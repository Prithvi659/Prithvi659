#include <iostream>
#include<string.h>

using namespace std;

class customer
{
    //data members
  private:
      int accountnumber;
      string name;
      string address;
      int phonenumber;
      int balance;

    // constructor
  public:
    customer()
    {
       balance=100000;
    }

     // memmber function
  public:

    void getdata(void)
    {
        cout<<"enter the account number"<<endl;
        cin>>accountnumber;
        cout<<"enter the name of holder"<<endl;
        cin>>name;
        cout<<"enter the address"<<endl;
        cin>>address;
        cout<<"enter the phone number"<<endl;
        cin>>phonenumber;
    }



    int displaydata(void)
    {
        cout<<"the account number is "<<accountnumber<<endl;
        cout<<"the name of holder is "<<name<<endl;
        cout<<"the address is "<<address<<endl;
        cout<<"the phone number is "<<phonenumber<<endl;
        cout<<"the balance is "<<balance<<endl;

    }
    int withdraw()
    {
        int amount;
        cout<<"balance is before withdrawn  $ "<<balance<<endl;
        cout<<"enter the amount to  withdrawn  "<<endl;
        cin>>amount;
        if(amount>=balance)
        {
            cout<<"insuficant balance  "<<endl;
        }
        else
        {
           balance -=amount;
           cout<<"balance after withdawn  $ "<<balance<<endl;
        }

    }

    void deposite()
    {
        int amount;
        cout<<"balance before deposite  $ "<<balance<<endl;
        cout<<"enter the amount to deposite  "<<endl;
        cin>>amount;
        balance+=amount;
        cout<<"balance after deposite  $ "<<balance<<endl;

    }

};

int main()
{
    customer c1;
    c1.getdata();
    c1.displaydata();
    c1.deposite();
    c1.withdraw();
    return 0;
}
