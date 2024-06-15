#include<iostream>
#include<iomanip>
using namespace std;
class employee{
    public:
    int salary;
    int per;
    void get_data(int salary=20000,int per=10)
    {
    cout<<"Enter salary:"<<endl;
     cin>>salary;
     cout<<"Enter percentage :";
     cin>>per;
    }
    void show_data(){
        cout<<"Final salary="<<(salary+ 0.01*per*salary);
    }
};
int main(){
    int n,i;
    cout<<"Enter no of employee:";
    cin>>n;
    employee emp[n];
    for(i=0;i<n;i++){
        emp[i].get_data();
    }
    for(i=0;i<n;i++){
        emp[i].show_data();
    }
    return 0;


}