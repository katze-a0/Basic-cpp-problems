//overloading member function 

#include<iostream>
#include<iomanip>
using namespace std;
class over {
    private:
    char ch;
    int n;
    public:
    void init(char,int);
    void display();
    void display(int);
    void display(char);
    void display(char,int);

};
void over::init(char chr,int num){
ch=chr;
n=num;
 for(int i=0;i<num;i++)
    cout<<setw(4)<<chr;
    cout<<endl;
}

void over::display(){
for(int i=0;i<5;i++)
cout<<setw(4)<<ch;
cout<<endl;
}

void over::display(int num){
    for(int i=0;i<num;i++)
    cout<<setw(4)<<ch;
    cout<<endl;

}

void over:: display(char chr){
    for(int i=0;i<n;i++)
    cout<<setw(4)<<chr;
    cout<<endl;
}

void over:: display(char chr,int num){
    for(int i=0;i<num;i++)
    cout<<setw(4)<<chr;
    cout<<endl;
    }

    int main()
    {
        over omf;
        omf.init('!',7);
        omf.display();
        omf.display(8);
        omf.display('*');
        omf.display('*',8);
        return 0;

    }