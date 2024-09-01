#include <iostream>
#include <iomanip> // For manipulators

using namespace std;

int main() {
    double num = 123.456789;

    // Default formatting
    cout << "Default formatting: " << num << endl;

    // Using manipulators
    cout << fixed << setprecision(2);
    cout << "Fixed with precision 2: " << num << endl;

    cout << setw(10) << num <<endl;
    cout << "alignment" << endl;
   

    return 0;
}
