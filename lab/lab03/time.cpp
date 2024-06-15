//time display

#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructors
    Time() : hour(0), minute(0), second(0) {}
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    // Function to add time objects
    Time addTime( Time t)  {
        int h = hour + t.hour;
        int m = minute + t.minute;
        int s = second + t.second;

        if (s >= 60) {
            m += s / 60;
            s %= 60;
        }
        if (m >= 60) {
            h += m / 60;
            m %= 60;
        }
        h %= 24;

        return Time(h,m,s);
    }

    // Function to display time in 12-hour format
    void display12HourFormat()  {
        //std::string suffix = (hour < 12) ? "AM" : "PM";
        int h12 = (hour % 12 == 0) ? 12 : hour % 12;
        std::cout << h12 << ":"
                  <<  minute << ":"
                  << second << " " << std::endl;
    }

    // Function to display time in 24-hour format
    void display24HourFormat()  {
        std::cout << hour << ":"
                  <<  minute << ":"<<second
                  << std::endl;
    }
};

int main() {
    Time t1(10, 30, 45);
    Time t2(3, 15, 20);

    // Adding two time objects
    Time sum = t1.addTime(t2);

    

    std::cout << "(12-hour format): ";
    sum.display12HourFormat();

    std::cout << "(24-hour format): ";
    sum.display24HourFormat();

    return 0;
}