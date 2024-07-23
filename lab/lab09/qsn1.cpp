#include <iostream>
using namespace std;
template <typename T>
T sum(T arr[], int size) {
    T total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};


    cout << "Sum of int array= " << sum(intArr, 5) << endl;
    cout << "Sum of double array= " << sum(doubleArr, 5) << endl;
  

    return 0;
}