//dynamic constructors
#include<iostream>
#include<cstring>
using namespace std;
class test{
    private:
    char (const char *str);
    public:
    test(){
        str=new char[1];
        str[0]='\0';
    }
    test(char *string){
        str=new char[strlen(string)+1];
        strcpy(str,string);
    }
    void showstring(){
        cout<<"You entered: "<<str;
    }
    ~test(){
        delete []str;
    }
};
 int main(){
    test obj("Nepal");
    obj.showstring();
    return 0;
 }