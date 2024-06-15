#include<iostream>
#include<string>
using namespace std;
class check{
private:
string str;
int i=0;
int count=0;
int value;
public:
  int check1(string str2){
    char ch;
    cout<<"enter a character to search:";
    cin>>ch;
    str=str2;
   count=0;
    while(i<str.length()&&str[i]!=ch)
      { count++;
       i++;}
       return count;
if(i==str.length()){
  return value=-1;
  }


  }
  void display(int value){
    /*int c;
   c=count;*/
   if(value==-1){
    cout<<"There is no seached character in the string!";
   }
   else
     { cout<< "position of searched character  is found: "<<count +1<<endl;
     cout<<"len="<<str.length();}
  }

  

};
int  main()
{
check obj;
string str1;
int v;
cout<<"enter a string:";
cin>>str1;
obj.check1(str1);
obj.display(v);
return 0;
}