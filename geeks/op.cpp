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
    void operator-(){
        x=-x;
        y=-y;
    }
};
int main() {
    A object(2,5);
    object.display();
    //-object;
    object.operator-();
    object.display();
     
    return 0;
}

