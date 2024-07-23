//program instrument

#include <iostream>
using namespace std;
#include<cctype>

class Musicians
{
public:
    void String()
    {
        string stringInstruments[5] = {"Veena", "Guitar", "Sitar", "Sarod", "Mandolin"};
        
        cout << "String instruments: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << stringInstruments[i] << endl;
        }
    }
    void wind()
    {
        string windInstruments[5] = {"Flute", "Clarinet", "Nadhaswaram", "Piccolo", "Saxophone"};
      
        cout << "Wind instruments:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << windInstruments[i] << endl;
        }
    }

    void perc()
    {
        string percInstruments[5] = {"Tabla", "Mridangam", "Bangos", "Drums", "Tambour"};
     
        cout << "Percussion instruments:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << percInstruments[i] << endl;
        }
    }
};

class TypeIns : public Musicians
{
public:
    char get()
    {
        char choice;
        cout << "Type of instruments to be displayed"<<endl;
        cout << "a. String instruments"<<endl;
        cout << "b. Wind instruments"<<endl;
        cout << "c. Percussion instruments"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        return choice;
    }

    void show()
    {
        char choice = get();
        choice = tolower(choice);
        switch (choice)
        {
        case 'a':
            String();
            break;
        case 'b':
            wind();
            break;
        case 'c':
            perc();
            break;
        default:
            cout << "Invalid choice"<<endl;
            break;
        }
    }
};

int main()
{
    Musicians m;
    m.String();
    m.wind();
    m.perc();

    TypeIns t;
    t.show();

    return 0;
}
