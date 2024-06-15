//objects as function argument
//structure jastai kaam garxa ..class name =str name ,obj=arg of function
#include<iostream>
using namespace std;
class complex{
    private:
    float real,imag;
    public:
    void getvalue(){
        cout<<"\n enter real part:";
        cin>>real;
        cout<<"\n enter imag part:";
        cin>>imag;

    }
    void showvalue(){
        cout<<"("<<real<<","<<imag<<")";

    }
    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imag=c2.imag+c1.imag;
    }
};

int main(){
    complex c1,c2,c3;
    c1.getvalue();
    c2.getvalue();
    c3.add(c1,c2);
    c1.showvalue();
    cout<<"+";
    c2.showvalue();
    cout<<" = ";
    c3.showvalue();
    return 0;}