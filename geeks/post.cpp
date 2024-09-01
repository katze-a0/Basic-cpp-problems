#include <iostream>
using namespace std;

class A{
    private:
    int count;
    public:
    A(){

    }
    A(int a){
        count=a;
    }
    void display(){
        cout<<"value of count: "<<count<<endl;
    }
     A operator++(int){
    A temp;
       temp.count=count++;
        return temp;
    }
  
};

int main() {
    A a1(4),b1;
    a1.display();
    b1=a1++;
  a1.display();  //output 5
  b1.display();
    return 0;
}