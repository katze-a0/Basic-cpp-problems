//function overloading
//on the basis of types of arguments
#include<iostream>
using namespace std;
void display(char);
void display(int);
void display(float);
int main()
{
    char ch='a';
    int inum=25;
    float fnum=54.1;
    cout<<"character function:";
    display (ch); //function call
     cout<<"integer function:";
     display (inum);
     cout<<"float function:";
    display (fnum);
    return 0;
    
}
void display (char ch)
{
    cout<<ch<<endl;
}
void display(int integer){
    cout<<integer<<endl;
}
void display(float floatnum){
    cout<<floatnum<<endl;
}

//double inverted comma for string literal only
