#include<iostream>
using namespace std;

class check{
    private:
    int num;
     int count=0;
    public:
    int check_prime(int p){
       
        int i;
        for(i=2;i<p;i++)
        {
       if(p%i==0)
       {count++;}
        }
           return count;
    }
};
int main(){
    int a;
    cout<<"enter a number: "<<endl;
    cin>>a;
    check obj1;
    obj1.check_prime(a);
    cout<<((obj1.check_prime(a)>0)?"not prime":"yes prime");
    return 0;

}