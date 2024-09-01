#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string modelNumber, color;

    // Get car details from user
    cout << "Enter car model number: ";
    cin>> modelNumber;

    cout << "Enter car color: ";
    cin>>color;

    // File to store car details
    ofstream outFile;
    outFile.open("car_info.txt", ios::out);

    if (outFile.is_open()) {
        // Write car details to file
        outFile.write(reinterpret_cast<char*>(&modelNumber),sizeof(modelNumber));
        outFile.write(reinterpret_cast<char*>(&color),sizeof(color));

        outFile.close();
        cout << "\nCar details written to file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    cout << "\nReading from file:\n";

    // Read and display car details from file
    ifstream inFile("car_info.txt");

    if (inFile.is_open()) {
        while (!inFile.eof()) {
        inFile.read(reinterpret_cast<char*>(&modelNumber),sizeof(modelNumber));
        inFile.read(reinterpret_cast<char*>(&color),sizeof(color));
        cout<<"Model Number:"<<modelNumber<<endl;
        cout<<"Color:"<<color<<endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}