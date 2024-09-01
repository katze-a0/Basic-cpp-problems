
//write to file and read from file

/*#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class student{
    private:
    char name[20];
    int ID;
    int age;
  public:
  void input(){
    cout<<"\nEnter name of student:";
    cin>>name;
    cout<<"\n Enter ID :";
    cin>>ID;
    cout<<"\n Enter age :";
    cin>>age;
  }
  void display(){
    cout<<"\nStudents Details: ";
    cout<<"\nName :";
    cout<<"\nID :";
    cout<<"\nAge :";
  }
  void add(){
    fstream fin;
    student s;
    fin.open("student.txt",ios::out);
    cout<<"\nStudents record ";
    s.input();
    fin.write((char*)&s,sizeof(s));
    fin.close();

  }
  void display_record(){
    fstream fout;
    student s;
    fout.open("student.txt",ios::in);
    while(fout.read((char*)&s,sizeof(s))){
        s.display();

    }
    fout.close();
  }
};
int main(){

    cout<<"\n--Enter students details--"<<endl;
    student s1[2];
    for(int i=0;i<2;i++){
        s1[i].add();
    }
    for(int i=0;i<2;i++){
        s1[i].display_record();

    }
return 0;

}

#include <iostream>
#include <fstream>
#include <cstring> // For handling C-string functions

using namespace std;

class Student {
private:
    char name[20];
    int ID;
    int age;

public:
    // Input student details
    void input() {
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter age: ";
        cin >> age;
    }

    // Display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Age: " << age << endl;
    }

    // Add student record to file
    void add() const {
        ofstream fout("student.txt", ios::app | ios::binary); // Open file in append mode

        if (!fout) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        fout.write((char*)this, sizeof(*this)); // Write current object to file
        fout.close();
    }

    // Display student records from file
    static void displayRecords() {
        ifstream fin("student.txt"); // Open file for reading

        if (!fin) {
            cerr << "Error opening file for reading!" << endl;
            return;
        }

        Student s;
        while (fin.read((char*)&s, sizeof(s))) {
            s.display(); // Display the read student object
            cout << "----------------------" << endl;
        }

        fin.close();
    }
};

int main() {
    cout << "-- Enter students details --" << endl;
    Student s1[2];
    for (int i = 0; i < 2; i++) {
        s1[i].input();
        s1[i].add();
    }

    cout << "\n-- Displaying student records --" << endl;
    Student::displayRecords();

    return 0;
}*/

#include <iostream>
#include <fstream>
#include <string> // For handling string functions

using namespace std;

class Student {
private:
    char name[20];
    int ID;
    int age;

public:
    // Input student details
    void input() {
        cout << "Enter name of student: ";
        cin.ignore(); // Clear the newline left by previous cin
       cin.getline(name, 20); // Read the name including spaces
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter age: ";
        cin >> age;
    }

    // Display student details
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Age: " << age << endl;
    }

    // Add student record to file
    void add()  {
        ofstream fout("student.txt", ios::app); // Open file in append mode, text mode

        if (!fout) {
            cerr << "Error opening file for writing!" << endl;
            return;
        }

        fout << name << endl;
        fout << ID << endl;
        fout << age << endl;
        fout.close();
    }

    // Display student records from file
     void displayRecords() {
        ifstream fin("student.txt"); // Open file for reading, text mode

        if (!fin) {
            cerr << "Error opening file for reading!" << endl;
            return;
        }

        Student s;
        while (fin.getline(s.name, 20)) {
            fin >> s.ID >> s.age;
            //fin.ignore(); // Ignore the newline after the age
            s.display();
            cout << "----------------------" << endl;
        }

        fin.close();
    }
};

int main() {
    cout << "-- Enter students details --" << endl;
    Student s1[2];
    for (int i = 0; i < 2; i++) {
        s1[i].input();
        s1[i].add();
    }

    cout << "\n-- Displaying student records --" << endl;
      for (int i = 0; i < 2; i++) {
        s1[i].display();
    }
    return 0;
}

