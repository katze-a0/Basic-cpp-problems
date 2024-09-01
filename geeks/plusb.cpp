#include <iostream>
using namespace std;

class Add{
    private:
    int x;
    public:
    Add(){

    }
    Add(int num){
       x=num;
    }
    Add operator+(Add a){
        //value of a2 is copied to a 
    Add temp;

    temp.x=x+a.x;
    return temp;
    }
    void display(){
        cout<<"value of num: "<<x<<endl;
        
    }
   
};
int main() {
  Add a1(2), a2(5);
  a1.display();
  a2.display();
  Add a3=a1+a2;
  a3.display();     
    return 0;
}