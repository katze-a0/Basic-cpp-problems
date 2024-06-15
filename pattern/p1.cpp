#include<iostream>
using namespace std;
class pattern
{

    public:
    int row,column;
    int i,j;
    int getdata(int r,int c){
        row=r;
        column=c;
    };
    void display(){
        cout<<"printing pattern:"<<endl;
for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
        cout<<"\t";
    }
    cout<<endl;
}

    };
};
int main()
{
    pattern obj;
    int a,b;
    cout<<"enter row and column:";
    cin>>a;
    cin>>b;
    obj.getdata(a,b);
    obj.display();
    return 0;

}