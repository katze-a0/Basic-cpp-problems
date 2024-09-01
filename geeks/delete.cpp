#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
    string name;
    int rollNumber;
    int age;
public:
    void input() {
        cout << "Enter name: ";
        cin.ignore(); // Clear newline from previous input
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Age: " << age << endl;
    }
    void addRecord() {
    ofstream file("students.txt", ios::out|ios::app);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    Student s;
    s.input();
    file << s.name << endl << s.rollNumber << endl << s.age << endl;
    file.close();
}



void listRecords() {
    ifstream file("students.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    Student s;
    while (getline(file, s.name)) {
        file >> s.rollNumber >> s.age;
        file.ignore(); // Ignore newline character after age
        s.display();
    }
    file.close();
}

void searchRecord() {
    int rollNumber;
    cout << "Enter roll number to search: ";
    cin >> rollNumber;

    ifstream file("students.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    Student s;
    bool found = false;
    while (getline(file, s.name)) {
        file >> s.rollNumber >> s.age;
        file.ignore(); // Ignore newline character after age
        if (s.rollNumber == rollNumber) {
            s.display();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Record not found!" << endl;
    }

    file.close();
}

void deleteRecord() {
    int rollNumber;
    cout << "Enter roll number to delete: ";
    cin >> rollNumber;

    ifstream file("students.txt");
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }

    ofstream tempFile("temp.txt");
    if (!tempFile) {
        cerr << "Error opening temporary file!" << endl;
        return;
    }

    Student s;
    bool deleted = false;
    while (getline(file, s.name)) {
        file >> s.rollNumber >> s.age;
        file.ignore(); // Ignore newline character after age
        if (s.rollNumber != rollNumber) {
            tempFile << s.name << endl << s.rollNumber << endl << s.age << endl;
        } else {
            deleted = true;
        }
    }

    file.close();
    tempFile.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (deleted) {
        cout << "Record deleted!" << endl;
    } else {
        cout << "Record not found!" << endl;
    }
}
};


int main() {
    int choice;
    Student s;
    do {
        cout << "\n1. Add Record\n2. List Records\n3. Search Record\n4. Delete Record\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: s.addRecord(); break;
            case 2: s.listRecords(); break;
            case 3: s.searchRecord(); break;
            case 4: s.deleteRecord(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
