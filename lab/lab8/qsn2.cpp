#include <iostream>
#include <iomanip>

// Define a struct to hold the manipulator parameters
struct Formatter {
    int width;
    int precision;
    char fill_char;

    // Constructor to initialize the parameters
    Formatter(int w, int p, char f) : width(w), precision(p), fill_char(f) {}
};

// Overload the << operator to handle our custom manipulator
std::ostream& operator<<(std::ostream& os, const Formatter& formatter) {
    os.width(formatter.width);
    os.precision(formatter.precision);
    os.fill(formatter.fill_char);
    return os;
}

int main() {
    int num = 123;
    double pi = 3.141592653589793;

    // Use the custom manipulator to format output
    std::cout << "Formatted output:" << std::endl;
    std::cout << Formatter(10, 2, '*') << num << std::endl; // Width: 10, Precision: 2, Fill char: '*'
    std::cout << Formatter(8, 5, '-') << pi << std::endl;   // Width: 8, Precision: 5, Fill char: '-'

    return 0;
}