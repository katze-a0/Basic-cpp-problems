//program to use concept of operator overloading



#include<iostream>
using namespace std;

class Overload {
private:
    int x;
public:
    Overload(int x = 0) : x(x) {}

    // Overloading == operator
    bool operator==(const Overload& obj2)  {
        return x == obj2.x;
    }

    // Overloading < operator
    bool operator<(const Overload& obj2)  {
        return x < obj2.x;
    }

    // Overloading > operator
    bool operator>(const Overload& obj2)  {
        return x > obj2.x;
    }

    // Overloading != operator
    bool operator!=(const Overload& obj2)  {
        //return !(*this == obj2); // Reusing operator==
        return  x!= obj2.x;
    }

    // Overloading >= operator
    bool operator>=(const Overload& obj2)  {
        return x>=obj2.x;
     }

    // Overloading <= operator
    bool operator<=(const Overload& obj2)  {
        return x<=obj2.x;
    }
};

int main() {
    Overload obj1(5), obj2(10);

    // Testing equality (==)
    if (obj1 == obj2) {
        cout << "obj1 is equal to obj2" << endl;
    } else {
        cout << "obj1 is not equal to obj2" << endl;
    }

    // Testing less than (<)
    if (obj1 < obj2) {
        cout << "obj1 is less than obj2" << endl;
    } else {
        cout << "obj1 is not less than obj2" << endl;
    }

    // Testing greater than (>)
    if (obj1 > obj2) {
        cout << "obj1 is greater than obj2" << endl;
    } else {
        cout << "obj1 is not greater than obj2" << endl;
    }

    // Testing not equal (!=)
    if (obj1 != obj2) {
        cout << "obj1 is not equal to obj2" << endl;
    } else {
        cout << "obj1 is equal to obj2" << endl;
    }

    // Testing greater than or equal to (>=)
    if (obj1 >= obj2) {
        cout << "obj1 is greater than or equal to obj2" << endl;
    } else {
        cout << "obj1 is not greater than or equal to obj2" << endl;
    }

    // Testing less than or equal to (<=)
    if (obj1 <= obj2) {
        cout << "obj1 is less than or equal to obj2" << endl;
    } else {
        cout << "obj1 is not less than or equal to obj2" << endl;
    }

    return 0;
}


