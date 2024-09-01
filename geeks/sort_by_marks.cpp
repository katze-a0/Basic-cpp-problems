#include <iostream>
#include <fstream>
#include <string> // For handling string functions

using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students that can be handled

class Student {
private:
    string name;
    int ID;
    int age;
    int marks;

public:
    // Input student details
    void input() {
        cout << "Enter name of student: ";
        getline(cin, name); // Read the name including spaces
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // Clear the newline left by previous cin
    }

    // Display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }

    // Add student record to file
    void add() const {
        ofstream fout("student.txt", ios::app); // Open file in append mode

        if (!fout) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        fout << name << endl;
        fout << ID << endl;
        fout << age << endl;
        fout << marks << endl;
        fout.close();
    }

    // Static function to read all student records from file
    static int readRecords(Student students[]) {
        ifstream fin("student.txt"); // Open file for reading

        if (!fin) {
            cerr << "Error opening file for reading!" << endl;
            return 0;
        }

        int count = 0;
        while (getline(fin, students[count].name)) {
            fin >> students[count].ID >> students[count].age >> students[count].marks;
            fin.ignore(); // Ignore the newline after marks
            count++;
            // Prevent reading past the maximum number of students
            if (count >= MAX_STUDENTS) break;
        }

        fin.close();
        return count;
    }

    // Static function to display sorted student records
    static void displaySortedRecords() {
        Student students[MAX_STUDENTS];
        int count = readRecords(students);

        // Sort students by marks in descending order using bubble sort
        for (int i = 0; i < count - 1; ++i) {
            for (int j = 0; j < count - i - 1; ++j) {
                if (students[j].marks < students[j + 1].marks) {
                    // Swap students[j] and students[j + 1]
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }

        // Display sorted records
        for (int i = 0; i < count; ++i) {
            students[i].display();
            cout << "----------------------" << endl;
        }
    }
};

int main() {
    cout << "-- Enter students details --" << endl;
    Student s1[2];
    for (int i = 0; i < 2; i++) {
        s1[i].input();
        s1[i].add();
    }

    cout << "\n-- Displaying sorted student records --" << endl;
    Student::displaySortedRecords();

    return 0;
}


