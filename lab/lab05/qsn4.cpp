#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Prefix increment operator (++Date)
    Date& operator++() {
        incrementDate();
        return *this;
    }

    // Postfix increment operator (Date++)
    Date operator++(int) {
        Date temp = *this;
        incrementDate();
        return temp;
    }

    // Helper function to increment the date by one day
    void incrementDate() {
        day++;
        if (!isValidDate()) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Helper function to check if the current date is valid
    bool isValidDate() const {
        if (month < 1 || month > 12 || day < 1) {
            return false;
        }
        int daysInMonth = daysInCurrentMonth();
        return (day <= daysInMonth);
    }

    // Helper function to determine days in the current month
    int daysInCurrentMonth() const {
        if (month == 2) {
            if (isLeapYear()) {
                return 29;
            } else {
                return 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    // Helper function to check if it's a leap year
    bool isLeapYear() const {
        if (year % 400 == 0) {
            return true;
        } else if (year % 100 == 0) {
            return false;
        } else if (year % 4 == 0) {
            return true;
        } else {
            return false;
        }
    }

    // Function to display the date in the format: dd/mm/yyyy
    void displayDate() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date d1(28, 2, 2020); // Leap year
    Date d2(31, 12, 2021); // Not a leap year

    std::cout << "Initial dates:" << std::endl;
    std::cout << "Date 1: ";
    d1.displayDate();
    std::cout << "Date 2: ";
    d2.displayDate();

    ++d1; // Using prefix increment operator,a
    d2++; // Using postfix increment operator

    std::cout << "\nDates after increment:" << std::endl;
    std::cout << "Date 1: ";
    d1.displayDate();
    std::cout << "Date 2: ";
    d2.displayDate();
    return 0;
}