#include<iostream>
#include<cmath>
using namespace std;
class shape{
    private:
    int r;
    int len,br;
    int a,b,c;
    int s;
    public:
    void circle(){
        cout<<"enter radius:";
        cin>>r;
        cout<<"perimeter= "<<(2*r*3.14)<<endl;
        cout<<"Area= "<<(3.14*r*r);
    }
    void rec(){
        cout<<"enter length"<<endl;
        cin>>len;
        cout<<"enter breadth"<<endl;
        cin>>br;
        cout<<"perimeter= "<<(2*(len+br))<<endl;
        cout<<"Area= "<<(len*br);
    }
    void triangle(){
        
     
        cout<<"enter side a:"<<endl;
        cin>>a;
        cout<<"enter side b:"<<endl;
        cin>>b;
        cout<<"enter side c:"<<endl;
        cin>>c;
           s=(a+b+c)/2;
        cout<<"perimeter = "<<(a+b+c)<<endl;
        cout << "area= " << (sqrt(s * (s - a) * (s - b) * (s - c)));

    }
    void select(int a){
        if(a==1)
        circle();
        if(a==2)
        rec();
        if(a==3)
        triangle();
    }

};
int main(){
    int a;
    cout<<"Enter 1 for circle\n"<<endl;
    cout<<"Enter 2 for rectangle\n"<<endl;
    cout<<"Enter 3 for triangle\n"<<endl;
    cin>>a;
    shape obj;
    obj.select(a);
    return 0;
    }