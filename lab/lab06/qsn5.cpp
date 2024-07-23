//program for derived ,friend class


#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

public:
    Complex() {
        real = 0.0;
        imag = 0.0;
    }

    void enterComplex() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void displayComplex() const {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }

    // Getter methods to access real and imaginary parts
    //double getReal() const { return real; }
    //double getImag() const { return imag; }
};

class DerivedComplex : public Complex {
private:
    double ownReal;
    double ownImag;

public:
    DerivedComplex() {
        ownReal = 0.0;
        ownImag = 0.0;
    }

    void enterOwnComplex() {
        cout << "Enter own real part: ";
        cin >> ownReal;
        cout << "Enter own imaginary part: ";
        cin >> ownImag;
    }

    void addOwnComplex() {
        real += ownReal;
        imag += ownImag;
    }

    friend class FriendComplex;
};

class FriendComplex {
public:
    void calculateDifference(const Complex& base, const DerivedComplex& derived) {
        double diffReal = base.real - derived.ownReal;
        double diffImag = base.imag - derived.ownImag;

        cout << "Difference between base complex number and derived's own complex number:" << endl;
        cout << "Real part: " << diffReal << endl;
        cout << "Imaginary part: " << diffImag << endl;
    }
};

int main() {
    Complex baseComplex;
    DerivedComplex derivedComplex;
    FriendComplex friendObj;

    // Enter complex numbers
    cout << "Enter base complex number:" << endl;
    baseComplex.enterComplex();

    cout << "Enter derived complex number:" << endl;
    derivedComplex.enterComplex();
    derivedComplex.enterOwnComplex();

    // Display entered complex numbers
    cout << "\nEntered complex numbers:" << endl;
    baseComplex.displayComplex();
    derivedComplex.displayComplex();

    // Add derived's own complex number to base complex number
    derivedComplex.addOwnComplex();
    cout << "\nAfter adding derived's own complex number to base complex number:" << endl;
    baseComplex.displayComplex();
    derivedComplex.displayComplex();

    // Calculate and display difference using friend class
    friendObj.calculateDifference(baseComplex, derivedComplex);

    return 0;
}
