//program to make use of virtual function and virtual destructor

#include<iostream>
using namespace std;
class shape{

    public:
    void area(){
        cout<<"Area of shape= "<<endl;
    }
    void display(){
        cout<<"Name of shape = "<<endl;
    }
};
 class circle:public shape{

    private:
    int r;
    public:
    void getvalue(){
        cout<<"enter value of r";
        cin>>r;
    }

    void area(){
        cout<<r*r<<endl;
    }
    void display(){
        cout<<"circle"<<endl;
    }
 };

 int main(){
    shape obj;
    circle obj1;
    obj1.getvalue();
    obj1.area();
    obj1.display();


    return 0;
 }