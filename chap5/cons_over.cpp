//constructor overloading
#include<iostream>
using namespace std;
class Account
{
    private:
    int accno;
    float balance;

    public:
    Account()
    {
        accno=1000, balance =1001.04;
    }
    Account (int acc){
        accno=acc;
        balance=0.0;
    }
    
    Account (int acc,float bal){
        accno=acc, balance=bal;
    }
    
    void display(){
        cout<<"\n Account no= "<<accno<<endl;
        cout<<"\n Balance= "<<balance<<endl;
    }};

    int main(){
        Account acc1;
        Account acc2(1002);
        Account acc3(1003,50003.02);
        cout<<".........Account information........."<<endl;
        acc1.display();
        acc2.display();
        acc3.display();
        return 0;
    }