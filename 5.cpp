//number and type of argument
#include<iostream>
#include<iomanip>
using namespace std;
char display (char);
char display (int,char);
int main(){

    char ch='a';
    int n=7;

    cout<<"character function:";
    display(ch);
    cout<<endl;
    cout<<"integer and character function";
    display(n,ch);
    cout<<endl;
    system("pause");
    return 0;
}

char display(char character)
{
    for(int i=0;i<5;i++)
    cout<<setw(2)<<character;
    cout<<endl;
}
char display(int n,char ch)
{
     for(int i=0;i<n;i++)
    cout<<setw(2)<<ch;
    cout<<endl;
}