#include <iostream>
using namespace std;

class test{
    private:
    int x;
    public:
    test(int value){
        x=value;
        
     cout<<"Constructor invoked\n ";
    }
    void print(){
        cout<<"X= "<<x<<endl;
        cout<<"(*this).x= "<<(*this).x;
        
    }
};
int main() {
    test t(12);
   // cout <<"Size of int: " << sizeof(int) << " bytes" << std::endl;
   t.print();
    return 0;
}