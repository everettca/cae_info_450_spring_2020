#include <iostream>
using namespace std;
double calculateCircumference(double radius);

const float PI = 3.14159265358979323846;

int main()
{
    double radius, circumference;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = calculateCircumference(radius);
    cout << "The circumference of the circle is " << circumference;
}

double calculateCircumference(double radius)
{
    double circ = 2 * radius * PI;
    return circ;
}
