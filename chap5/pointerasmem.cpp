//pointer as data member
#include<iostream>
using namespace std;
class pointerasmem{
    private:
    int *ptr;
    public:
    void setpointer (int *var){    //receives address of 5    
       ptr=var;                     //ptr=address of 5
    }
    void display()
    {
        cout<<ptr; //if *ptr is used then output is 5 which is value and if 
                     // ptr is used then output is address of 5
    }

};
int main()
{
    int num=5;
    pointerasmem p;
    p.setpointer(& num);   //sends address of 5 as arg to setpointer
    p.display();
    return 0;
}