#include<iostream>
using namespace std;

class part{
    private:
    static int count;
    int pid;
    public:
    part(){
        count++;
        pid=count;
    }
    int getcount(){
        return count;

    }
    void show(){
        cout<<"parts id: "<<pid<<endl;
        cout<<"total number of parts are: "<<count<<endl;
    }
};
int part::count=0;     //static data members are usally initialized outside class 
int main(){
    part p1,p2;
    cout<<"count is "<<p1.getcount()<<endl;  //1
    p1.show();                               //1 , 1
    cout<<"count is "<<p2.getcount()<<endl;              //2 
    p2.show();
    part p3;
    cout<<"count is "<<p3.getcount()<<endl;
    p3.show();
    return 0;
    
    
    

}