

#include <iostream>

class MeterCentimeter {
private:
    int meters;
    int centimeters;

public:
    MeterCentimeter(int m, int cm) : meters(m), centimeters(cm) {}

    // Conversion function to FeetInches
    class FeetInches toFeetInches() const {
        double totalInches = meters * 100 + centimeters / 2.54;
        int feet = totalInches / 12;
        double inches = totalInches - feet * 12;
        return class FeetInches(feet, inches);
    }

    void display() const {
        std::cout << meters << " meters " << centimeters << " centimeters";
    }
};

class FeetInches {
private:
    int feet;
    double inches;

public:
    FeetInches(int ft, double in) : feet(ft), inches(in) {}

    // Conversion function to MeterCentimeter
    class MeterCentimeter toMeterCentimeter() const {
        double totalCentimeters = feet * 30.48 + inches * 2.54;
        int meters = totalCentimeters / 100;
        int centimeters = totalCentimeters - meters * 100;
        return class MeterCentimeter(meters, centimeters);
    }

    void display() const {
        std::cout << feet << " feet " << inches << " inches";
    }
};

int main() {
    // Example usage:
    MeterCentimeter distMC(5, 70); // 5 meters and 70 centimeters
    FeetInches distFI(18, 3);     // 18 feet and 3 inches

    // Convert MeterCentimeter to FeetInches
    FeetInches convertedToFI = distMC.toFeetInches();
    std::cout << "Converted to FeetInches: ";
    convertedToFI.display();
    std::cout << std::endl;

    // Convert FeetInches to MeterCentimeter
    MeterCentimeter convertedToMC = distFI.toMeterCentimeter();
    std::cout << "Converted to MeterCentimeter: ";
    convertedToMC.display();
    std::cout << std::endl;

    return 0;
}
