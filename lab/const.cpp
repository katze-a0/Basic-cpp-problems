//object and function relation

#include<iostream>
using namespace std;

class relation{
   public:
   void non_const_func(){

    cout<<"Non constant function called"<<endl;
   }
   void const_func()const{

    cout<<"Constant function called"<<endl;
   }



};
int main(){
    relation obj1;
    const relation obj2;
    //obj2.non_const_func();   --constant obj cannot call non constant member function

    obj2.const_func();
    obj1.non_const_func();
    obj1.const_func();
    return 0;

}