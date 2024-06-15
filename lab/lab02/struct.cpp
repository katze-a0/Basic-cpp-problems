#include<iostream>
#include<string>
using namespace std;
struct date{
    int month;
    int day;
    int year;
}d;
void display(const date );
int main(){
    cout<<"enter date:"<<endl;
    cout<<"enter month:";
    cin>>d.month;
    cout<<endl;
    cout<<"enter day:";
    cin>>d.day;
     cout<<endl;
    cout<<"enter year:";
    cin>>d.year;
    cout<<endl;
display(d);
return 0; 
}
void display(const date d){
    cout<<"/"<<d.month<<"/"<<d.day<<"/"<<d.year;}