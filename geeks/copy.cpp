#include <iostream>
#include <fstream>
#include <cctype> // For std::toupper

using namespace std;

int main() {
    // Define file names
    string sourceFileName = "source.txt";
    string destinationFileName = "destination.txt";

    // Open the source file for reading
    ifstream sourceFile(sourceFileName, ios::in);
    if (!sourceFile) {
        cerr << "Error opening source file for reading!" << endl;
        return 1;
    }

    // Open the destination file for writing
    ofstream destinationFile(destinationFileName, ios::out);
    if (!destinationFile) {
        cerr << "Error opening destination file for writing!" << endl;
        return 1;
    }

    char ch;
    // Read from source file and write to destination file
    while (sourceFile.get(ch)) {
        // Convert lowercase to uppercase
        ch = toupper(static_cast<unsigned char>(ch));
        destinationFile.put(ch);
    }

    // Close files
    sourceFile.close();
    destinationFile.close();

    cout << "Data copied and converted successfully!" << endl;

    return 0;
}
