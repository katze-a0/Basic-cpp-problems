//no of arguments 
#include<iostream>
using namespace std;
int display(int);
int display(int,int);
int main(){

    int a=5,b=10;
    cout<<"one arg function=";
    display(a);
    cout<<"two arg function=";
    display(a,b);
    return 0;
    }

    int display(int a )
    {
        cout<<a<<endl;
    }
    int display(int a ,int b){
        cout<<(a+b)<<endl;
    }