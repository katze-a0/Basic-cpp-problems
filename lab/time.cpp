#include<iostream>
using namespace std;
class time{
    private:
    int hr=0;
    int min=0;
    int sec=0;
    public:
    time(int a1,int b1,int c1) { //constructors 
    hr=a1;             //must be parameterized
    min=b1;
    sec=c1;
    };
    time(int a2,int b2,int c2) {
        hr=a2;
        min=b2;
        sec=c2;

    };
   void add_12(int a1,int b1,int c1,int a2,int b2,int c2){

     if((c1+c2)>60)  
     {min++;
     sec=(c1+c2)%60;}
     else
     {sec=c1+c2;
     min+=(b1+b2);}

     if(min>=60)
     {
        hr++;
        min=(b1+b2)%60;
     }

     hr+=a1+a2;
     if(hr>12)
     hr=hr%12;
     else 
     hr=hr+a1+a2;
    
     return hr,min,sec;

    }
void display(){
    cout<<"Display time in 12 hr domain:"<<endl;
    cout<<"hour ="<<hr<<"min= "<<min<<"Sec= "<<sec;

}};

int main(){
    time obj;
    int hr1,min1,sec1;
    int hr2,min2,sec2;
    cout<<"Enter time1 :"<<endl;
    cin>>hr1>>min1>>sec1;
    cout<<"Enter time2 :"<<endl;
    cin>>hr2>>min2>>sec2;
     time obj(hr1, min1, sec1);
     time obj(hr1, min2, sec2);
    obj.add_12(hr1,min1,sec1,hr2,min2,sec2);
    obj.display();
    return 0;

}