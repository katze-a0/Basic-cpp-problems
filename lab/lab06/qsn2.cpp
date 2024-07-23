//measurement conversion
// .  Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
// Write conversions functions so that the program can convert objects of both types.


#include <iostream>
using namespace std;


class fps;


class mks
{
public:
    int m,cm;
    

public:
    
    mks(int m = 0, int cm = 0) : m(m), cm(cm) {}

    // Convert from fps to mks
    void convertfromfps(const fps& d)
    {
        float ft = d.feet + d.inches / 12.0f;  
        m = ft * 0.3048;  // Convert feet to meters
        cm = (ft * 0.3048 - m) * 100;  // Convert remaining decimal feet to centimeters
    }

    // Print MKS measurements
    void display_mks() const
    {
        cout << m << " m " << cm << " cm";
    }
};

// fps class to store distances in feet-inch system
class fps
{
public:
    int feet;
    int inches;

public:
    // Constructor to initialize feet and inches
    fps(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    // Convert from Metric to British
    void convertfrommks(const mks& d)
    {
        float meter = d.m + d.cm / 100.0f;  // Convert meters and centimeters to a combined float value in meters
        feet = meter * 3.28;  // Convert meters to feet
        inches = (meter* 3.28 - feet) * 12;  // Convert remaining decimal meters to inches
    }

    
    void display_fps() const
    {
        cout << feet << " ft " << inches << " in";
    }
};


int main()
{
    
    mks d1(3, 92),d3;
    fps d2(4, 8),d4;

    

    // Convert and assign
    d3.convertfromfps(d2);  // Convert fps distance d2 to Metric and assign to d3
    d4.convertfrommks(d1);   // Convert mks distance d1 to British and assign to d4

    // Print converted measurements
    cout << "Converted Metric to fps system measurements : ";
    d1.display_mks();
    cout << " = ";
    d4.display_fps();
    cout << endl;

    cout << "Converted fps to Metric system measurements : ";
    d2.display_fps();
    cout << " = ";
    d3.display_mks();
    cout << endl;

    return 0;
}
