//static_func.cpp
#include<iostream>
using namespace std;
class element
{

    private:
    static int count;
    int data;
    public:
    element(){
        count++;
        data=count;
    }
    ~element(){
        count--;
        cout<<"Destroying element with value"<<data<<endl;
    }
    static void showcount(){ //private static function
        cout<<"Number of elemnents are:  "<<count<<endl;
    }
    void showdata(){
        cout<<"The data is:"<<data<<endl;
    }
};
int element::count=0;

int main(){
    element s1;
    element::showcount();
    element s2,s3;
    element::showcount();
    s1.showdata();
    s2.showdata();
    s3.showdata(); //destructor are called by the compiler  itself at the end of program
    return 0;
}
