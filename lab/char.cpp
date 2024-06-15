//use pointer and string
#include<iostream>
#include<string>

using namespace std;

int main(){
    int i;
    char arr[5];
  std::cout<<"enter string:";
    for(i=0;i<5;i++){
    std::cin>>arr[i];
    
    }
    char a;
    a ='c';
    for(i=0;i<5;i++){
        if(a==arr[i])
        {
            std::cout<<"c is found";
            std::cout<<"position of c = "<<i+1;
            std::cout<<endl;      }
            
    }


return 0;

}