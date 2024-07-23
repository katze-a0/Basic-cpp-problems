

/*#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    char name[40];
    int id;
    char department[40];
    char address[40];

public:
    void setdata()
    {
        cout << "Enter name of student: " << endl;
        cin >> name;
        fflush(stdin);
        cout << "Enter student's id: " << endl;
        cin >> id;
        fflush(stdin);
        cout << "Enter student's Department: " << endl;
        cin >> department;
        fflush(stdin);
        cout << "Enter student's Address: " << endl;
        cin >> address;
    }

    void showdata()
    {
        cout << "Name of Student: " << name << endl;
        cout << "Id of student: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Address: " << address << endl;
    }

    void input_to_file()
    {
        fstream file;
        Student s1;
        file.open("student.txt", ios::binary | ios::out | ios::binary);
        cout << "Enter student data: " << endl;
        s1.setdata();
        file.write((char *)&s1, sizeof(s1));
    }

    void output_from_file()
    {
        fstream fout;
        Student s1;
        fout.open("student.txt", ios::out | ios::in | ios::binary);
        fout.seekg(0);
        fout.read((char *)&s1, sizeof(s1));
        while (!fout.eof())
        {
            cout << "Student record: " << endl;
            s1.showdata();
            fout.read((char *)&s1, sizeof(s1));
        }
    }
};

int main()
{
    Student s;
    s.input_to_file();
    cout<<"---------------- Information From file ------------------ "<<endl;
    s.output_from_file();
    return 0;
}*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure to hold student information
struct Student {
    string name;
    int studentId;
    string department;
    string address;
};

// Function to input student data
void inputStudentData(Student& student) {
    cout << "Enter Student Name: ";
    getline(cin >> ws, student.name);  // getline for string input with spaces
    cout << "Enter Student ID: ";
    cin >> student.studentId;
    cout << "Enter Department: ";
    getline(cin >> ws, student.department);  // getline for string input with spaces
    cout << "Enter Address: ";
    getline(cin >> ws, student.address);  // getline for string input with spaces
}

// Function to write student data to file
void writeStudentToFile(const Student& student, ofstream& outFile) {
    outFile << student.name << endl;
    outFile << student.studentId << endl;
    outFile << student.department << endl;
    outFile << student.address << endl;
    outFile << "=====" << endl;  // Separator between records
}

// Function to read student data from file and display
void readAndDisplayStudents(ifstream& inFile) {
    Student student;
    string line;

    cout << "\n Student Information\n";
    while (getline(inFile, line)) {
        if (line == "=====") {
            cout << "Name: " << student.name << endl;
            cout << "Student ID: " << student.studentId << endl;
            cout << "Department: " << student.department << endl;
            cout << "Address: " << student.address << endl;
            cout << "==============================\n";
        } else {
            student.name = line;
            inFile >> student.studentId;
            inFile.ignore();  // Consume newline character
            getline(inFile, student.department);
            getline(inFile, student.address);
        }
    }
}

int main() {
    const string fileName = "student_data.txt";
    ofstream outFile(fileName);
    ifstream inFile(fileName);

    if (!outFile.is_open()) {
        cerr << "Failed to open " << fileName << " for writing." << endl;
        return 1;
    }

    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cin.ignore();  // Consume newline character left by cin

    Student students[2];

    // Input student data
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        inputStudentData(students[i]);
        writeStudentToFile(students[i], outFile);
    }

    outFile.close();

    // Read and display student data from file
    readAndDisplayStudents(inFile);

    inFile.close();

    return 0;
}
