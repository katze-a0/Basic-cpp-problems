
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Item {
    string name;
    int quantity;
    double price;
};

void printInvoice(Item items[], int numItems) {
    cout << fixed << setprecision(2);

    cout << "Department Store Invoice\n";
    cout << "-----------------------\n\n";

    cout << "Item Name\tQuantity\tPrice\tTotal\n";
    

    double total = 0.0;
    for (int i = 0; i < numItems; i++) {
        double itemTotal = items[i].quantity * items[i].price;
        total += itemTotal;

        cout << items[i].name << "\t\t" << items[i].quantity << "\t\t" << items[i].price << "\t\t" << itemTotal << endl;
    }

    cout << "\nSubtotal: " << total << endl;
    cout << "Tax (10%): " << total * 0.10 << endl;
    cout << "Total: " << total * 1.10 << endl;
}

int main() {
    Item items[] = {
        {"Mobile", 2, 20.00},
        {"Laptop", 3, 30.00},
        {"Ipad", 4, 50.00},
       
    };

    int numItems = sizeof(items) / sizeof(items[0]);

    printInvoice(items, numItems);

    return 0;
}