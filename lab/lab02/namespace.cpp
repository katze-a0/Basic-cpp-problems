#include<iostream>
#include<iomanip>
using namespace std;
namespace square{
    int num;
    void fun(){
        cout<<"enter number:";
        cin>>num;
        int result=num*num;
     cout<<"Result-1:"<<result<<endl;
     int r=(cube::num)*(cube::num);
     cout<<"using num of cube namespace :"<<r;
    }
}
namespace cube{
    int num;
    void fun(){
        cout<<"enter number:";
        cin>>num;
        int result=num*num*num;
        int result2=(square::num)*(square::num)*(square::num);
        cout<<"Result-2:"<<result<<endl;
        cout<<"using num of square namespace field: "<<result2;
       
    }
    
}
int main(){
square::fun();
cube::fun();
return 0;

} 
