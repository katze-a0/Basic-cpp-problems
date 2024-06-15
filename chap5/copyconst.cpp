//example from book
#include<iostream>
using namespace std;
class valueshow
{
    private:
    int value;
    public:
     valueshow(){}
     valueshow(int a){
        value=a;
     }
     valueshow(valueshow &x) //reference object argument     
     {value=x.value ;      }
     int display()
     {
        return value;
     }
};

int main()
{
    valueshow p1(100); //object creation and value initialization
    valueshow p2(p1);
    valueshow p3=p1;
    cout<<"value of data on object p1= "<<p1.display()<<endl;
    cout<<"value of data on object p2= "<<p2.display()<<endl;
    cout<<"value of data on object p3= "<<p3.display()<<endl;
    
}
