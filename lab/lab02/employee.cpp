/*array of objects
#include<iostream>
using namespace std;
class Test
{
    private:
    int data;
    public:
    Test(){
        data=0;
    }
    void getdata(){

        cout<<"enter data:";
        cin>>data;
    }
    void showdata(){
        cout<<"Data :"<<data<<endl;
    }
};
int main(){
    Test t1[10];
    int i,n;
    cout<<"How many data?";
    cin>>n;
    for(i=0;i<n;i++){
        
       t1[i].getdata();
    }
    
    for(i=0;i<n;i++){
        t1[i].showdata();
    }
}*/


#include<iostream>
using namespace std;
class employee{
public:
int salary;
void get_salary(){
    cout<<"enter salary:"<<endl;
    cin>>salary;
}
void display_salary()
{
    cout<<"salary="<<(0.9*salary)<<endl;
}

};
int main(){
    int n,i;
    cout<<"enter no of employee:";
    cin>>n;
    employee emp[n];
    for(int i=0;i<n;i++){
     emp[i].get_salary();
    }
    for(int i=0;i<n;i++){
     emp[i].display_salary();
    }
return 0;
}










