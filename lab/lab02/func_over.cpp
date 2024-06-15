
//function overloading for 3 functions -----ft to inch conversion
#include<iostream>
using namespace std;
class measure{
    private:
    float ft;
    float inch;
    public:
    void convert(){
        cout<<"enter ft:"<<endl;
        cin>>ft;
        inch=12*ft;
        cout<<"inch measure1:"<<inch;
        cout<<endl;
    }
    void convert(float f)
    {
        ft= f;
         inch=12*ft;
        cout<<"inch measure2: "<<inch;
     cout<<endl;
    }
    void convert(float a,float b){
        ft=a;
        ft=b;
        cout<<"in inch3: "<<(a*12)<<endl;;
        cout<<" in inch4: "<<(b*12);
    }
};
int main(){
measure obj;
//int ft;
float a,b,ft;
obj.convert();
cout<<"enter ft: ";
cin>>ft;
obj.convert(ft);
cout<<"enter two ft measure: ";
cin>>a>>b;
obj.convert(a,b);
return 0;
}