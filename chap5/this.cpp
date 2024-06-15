//use of this pointer
/*tei bhitra ko objects ra mem functions lai point garna use hunxa*/

#include<iostream>
using namespace std;

class Car {
private:
    int spd;
public:
    void setSpeed() {
        cout << "Enter speed for car:";
        cin >> this->spd; // Directly assign to the 'spd' member variable
    }
    int getSpeed() {
        return this->spd;     //this->spd; this->spd;  // The 'this' pointer is used to retrieve the object's x 
                              // hidden by the local variable 'x' 
        
    }
};

int main() {
    Car car1, car2;
    car1.setSpeed(); // Set speed for car1
    car2.setSpeed(); // Set speed for car2

    cout << "Speed of car1: " << car1.getSpeed() << endl;
    cout << "Speed of car2: " << car2.getSpeed() << endl;

    return 100;
}

