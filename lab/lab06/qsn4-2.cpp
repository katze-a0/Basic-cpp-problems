
#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        cout << "Name:"<<endl;
        fflush(stdin);
        getline(cin, name);

        cout << "Age: "<<endl;
        fflush(stdin);
        cin >> age;
    }
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }
    void display(){
        cout<<"Student details:"<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

    void displayAddress(){
        cout<<"Address of this object is: "<<this<<endl;
        cout<< "Size of this object is: "<<sizeof(this)<<endl;
    }
    void deleteObject(){
        delete this;
    }
};

class Student : public Person
{
private:
    string id;

public:
    Student()
    {
        cout << "Id: ";
        fflush(stdin);
        getline(cin, id);
    }
    void setDetails(string n, int a, string i)
    {
        Person::setDetails(n, a);
        id = i;
    }
    void display()
    {
        cout<<"Student details: "<<endl;

        Person::display();
        cout<<"Id: "<<id<<endl;
    }
};

class Employee : public Person
{
private:
    string id;
    int salary;

public:
    Employee()
    {
        cout << "Id:";
        fflush(stdin);
        getline(cin, id);
    }
    void setDetails(string n, int a, string i, int s)
    {
        Person::setDetails(n, a);
        id = i;
        salary = s;
    }
    void display()
    {
        cout<<"Employee details: "<<endl;

        Person::display();
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    cout << "Enter details for person:"<<endl;
    Person p;
    p.display();
    p.displayAddress();
    p.setDetails("Aashish Karki", 22);
    p.display();

    cout << "Enter details for student:"<<endl;
    Student s;
    s.display();
    s.displayAddress();
    s.setDetails("Aashish Karki", 22 , "bct004");
    s.display();

    cout << "\nEnter details for employee:\n";
    Employee e;
    e.display();
    e.displayAddress();
    e.setDetails("Sudip Kaji Basnet", 22, "Kaju123", 10000);
    e.display();

    p.deleteObject();
    s.deleteObject();
    e.deleteObject();

    return 0;
}
