//program to convert distance m ,cm to m and vice versa

#include<iostream>
using namespace std;

class distance1{

private:
float m;
float cm;
float result;
public:
void convert(float p,float q){

    
    m=p+(q/100.0f);
    cout<<"Result in meter= "<<m<<endl;

}

void convert(float p){
    result=p*100;
    int copy=result;
    int result_m=result/100;
    int result_cm=copy%100;
    cout<<"Result in m  and cm = "<<result_m<<"m "<<"and"<<result_cm<<"cm";

}


     void handle_input() {
        float m, cm;

        cout << "Enter distance in meters: ";
        cin >> m;

        // Check if there are more characters in the input buffer
        if (cin.peek() == '\n') {
            convert(m); 
        } else {
            cin >> cm;   // Read centimeters
            convert(m, cm); // Both meters and centimeters provided
        }
    
}
};
int main(){
    distance1 obj1;
    obj1.handle_input();
    return 0;
}