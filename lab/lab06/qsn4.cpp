//program to use concept of base  class  and derived class
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {
        name = "";
        age = 0;
    }

    void enterDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void printAddress() {
        cout << "Address of Person object: " << this << endl;
    }
};

class Student : public Person {
private:
    string studentID;

public:
    Student() {
        studentID = "";
    }

    void enterDetails() {
        Person::enterDetails();
        cout << "Enter student ID: ";
        cin >> studentID;
    }

    void printAddress() {
        cout << "Address of Student object: " << this << endl;
    }
};

class Employee : public Person {
private:
    string employeeID;

public:
    Employee() {
        employeeID = "";
    }

    void enterDetails() {
        Person::enterDetails();
        cout << "Enter employee ID: ";
        cin >> employeeID;
    }

    void printAddress() {
        cout << "Address of Employee object: " << this << endl;
    }
};

int main() {
    // Create objects of each class
    Person p1,p2;
    Student s1,s2;
    Employee e1,e2;
    

    // Enter details for each object
    p1.enterDetails();
    p2.enterDetails();
    s1.enterDetails();
    s2.enterDetails();
    e1.enterDetails();
    e2.enterDetails();

    // Print addresses of each object
    p1.printAddress();
    p2.printAddress();
    s1.printAddress();
    s2.printAddress();
    e1.printAddress();
    e2.printAddress();

    // Calculate size of each object in bytes
    cout << "Size of Person object: " << sizeof(p1) << " bytes" << endl;
    cout << "Size of Student object: " << sizeof(s1) << " bytes" << endl;
    cout << "Size of Employee object: " << sizeof(e1) << " bytes" << endl;

    return 0;
}