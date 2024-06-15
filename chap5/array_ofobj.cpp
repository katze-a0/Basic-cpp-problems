//array of objects
#include<iostream>
using namespace std;
class Test
{
    private:
    int data;
    public:
    Test(){
        data=0;
    }
    void getdata(){

        cout<<"enter data:";
        cin>>data;
    }
    void showdata(){
        cout<<"Data :"<<data<<endl;
    }
};
int main(){
    Test t1[10];
    int i,n;
    cout<<"How many data?";
    cin>>n;
    for(i=0;i<n;i++){
        
       t1[i].getdata();
    }
    /*display data*/
    for(i=0;i<n;i++){
        t1[i].showdata();
    }
}