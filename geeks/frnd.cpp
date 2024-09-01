#include <iostream>
using namespace std;

class A{
    private:
    int x,y;
    public:
    A(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"value of x: "<<x<<endl;
         cout<<"value of y: "<<y<<endl;
    }
   friend A operator-(A a);
};
 A operator-(A a){
    A temp(2,5);
        temp.x=-a.x;
        temp.y=-a.y;
        return temp;
    }
int main() {
    A object(2,5);
    object.display();
    A obj2=-object;
    obj2.display();
     
    return 0;
}
