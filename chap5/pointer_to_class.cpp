//pt_to_member
#include<iostream>
using namespace std;
class test{
    public:
    int data;
    void showdata(){
        cout<<"Data ="<<data<<endl;

    }
};
int main(){
    int test::*datap;
    datap=&test::data;
    void (test::*funcp)();
    funcp=&test::showdata;
    test obj;
    test *objp;
    cout<<"enter data:";
    cin>>obj.data;
    //as pointer
    cout<<obj.*datap;
    cout<<endl;

    (obj.*funcp)(); 
    cout<<endl;   
           //obj.showdata();
           
    cout<<objp->*datap;
    cout<<endl;
    (objp->*funcp)();
    return 0;


}