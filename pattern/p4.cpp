#include<iostream>
using namespace std;
int main()
{
    int s,r,i,j;
    r=10;
   
    for(i=r;i>=1;i--){
         for(s=1;s<=i;s++){
        cout<<" ";
    }
        for(j=r;j>=i;j--){
            cout<<"*";
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}