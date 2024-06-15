// C++ program to demonstrate accessing of data members 
#include <iostream> 
using namespace std; 
class First { 
	// Access specifier 
public: 
	// Data Members 
	string name; 
	// Member Functions() 
	void printname() { cout << "Entered name is :" << name; } 
}; 
int main() 
{ 
    string a;
	// Declare an object of class First
	First obj1; 
	// accessing data member 
    cout<<"enter name:"<<endl;
    cin>>a;
	obj1.name = a; 
	// accessing member function 
	obj1.printname(); 
	return 0; 
}