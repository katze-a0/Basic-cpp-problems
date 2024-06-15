//object as data member
//represents mechanism of linked list through containership 
#include<iostream>
#include<iomanip>
using namespace std;
class A
{
private:
int data;
public:
void getdata(){
    cout<<"enter data:"<<endl;
    cin>>data;

}
void showdata(){
    cout<< "output linked:" <<data;
}

};
class B
{
    private:
    A a;
    int b;
    public:
    void getdata(){
        a.getdata();
        cin>>b;
    }
    void showdata(){

        a.showdata();
        cout<<setw(4); //spacing 
        cout<< b;
    }
};

int main(){
    B beg;
    beg.getdata();
    beg.showdata();
    return 0;
}

