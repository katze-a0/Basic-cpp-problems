#include<iostream>
using namespace std;
 class celsius{
    private:
    int c=0;
    int result=0;
    public:
   int tofah(int q){
    
    return result=9*q/5 +32;
    }
 };

 class fah{
    private:
    int f;
    int result1;
    public:
    int tocel(int f){
      result1=(f-32)*5/9;
      return result1;
    }
 };
 int main(){
    celsius obj1;
    fah obj2;
    int a;
   std::cout<<"enter celsius temperature= ";
   cin>>a;
   cout<<endl;
    int b;
   std::cout<<"enter fahrenheit temperature= ";
   cin>>b;
   cout<<endl;
    
    cout<<"result in fahrenheit= "<<obj1.tofah(a);
    cout<<endl;
    cout<<"result in celsius= "<<obj2.tocel(b);
    return 0;

 }