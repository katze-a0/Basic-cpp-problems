
//program to demonstrate friend class and friend function
#include<iostream>
using namespace std;
 class B;
 class A{

 public:
 int x,y;
 A(int x=0,int y=0):x(x),y(y){}
 //friend int getsum(const A& p1,const B& p2);
 A  getsum(B obj); //friend function 
 friend A mul(A a,B b);
 friend A sub(A a,B b);
 friend A div(A a,B b);
  void display() const{
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
 };

class B{

    public:
    int x,y;
     B(int x=0,int y=0):x(x),y(y){}
   /* friend B getsum(A a,B b){
        return B(a.x+b.x,a.y+b.y);
    };*/
    friend A A::getsum(B obj);
    friend A mul(A a,B b);
    friend A sub(A a,B b);
    friend A div(A a,B b);
    void display() const{
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
 
 A A::getsum( B obj) {
    A result(x + obj.x, y + obj.y);
    return result;
}
 A mul(A a,B b){
    return A(a.x*b.x,a.y*b.y);
    
 }
  A sub(A a,B b){
    return A(a.x-b.x,a.y-b.y);
    
 }
 A div(A a,B b){
    return A(a.x/b.x,a.y/b.y);
 }
 

int main(){
    A p1(3, 4);
    B p2(1, 2);
    A sum= p1.getsum(p2);
    cout<<"sum:";
    sum.display();
    cout<<endl;

    A multiply=mul(p1,p2);
    cout<<"mul:";
    multiply.display();
    cout<<endl;

    A subtraction=sub(p1,p2);
    cout<<"sub";
    subtraction.display();
    cout<<endl;
     
    A divison=div(p1,p2);
    cout<<"div";
    divison.display();
    cout<<endl; 


  return 0;
}