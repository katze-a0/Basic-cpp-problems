//pointer to object
#include<iostream>
using namespace std;
class employee
{
    private:
    char name[20];
    int age;
    public:
    void getdata(){
        cout<<"enter name of employee:"<<endl;
        cin>>name;
        cout<<"enter age of employee:"<<endl;
        cin>>age;

    }
    void showdata()
{
    cout<<name;
    cout<<endl;
    cout<<age;

}
};

int main(){
    employee *eptr; //pointer to object
    employee e;
    eptr=&e;
    eptr->getdata();         /*instead of e.employee*/
    cout<<"Accessing data through pointer variable:";
    eptr->showdata();
    return 0;
    
}