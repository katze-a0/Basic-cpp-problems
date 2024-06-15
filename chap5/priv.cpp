#include <iostream>
#include <string>
using namespace std;

class First {
private:
    string name;

public:
    // Member Function to set the name
    void setName(string newName) {
         name=newName;
    }

    // Member Function to print the name
    void printName() {
        cout << "Entered name is: " << name << endl;
    }
};

int main() {
    string inputName;
    cout << "Enter name: ";
    cin >> inputName;

    First obj1;
    // Setting the name using the public member function
    obj1.setName(inputName);

    // Accessing the name using the public member function
    obj1.printName();

    return 0;
}
