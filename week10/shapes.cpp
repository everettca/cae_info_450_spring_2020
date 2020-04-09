
#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape
{
public:
    virtual int get_perimeter_length() { return -1; }
    virtual int get_area() { return -1; }
};
class circle : public shape
{
private:
    int r;

public:
    circle(int radius) { r = radius; }
    int get_perimeter_length()
    {
        int perimeter;
        perimeter = 2 * r * PI;
        return perimeter;
    }
    int get_area()
    {
        int area;
        area = PI * (r * r);
        return area;
    }
};
class rectangle : public shape
{
private:
    int h;
    int w;

public:
    rectangle(int height, int width)
    {
        h = height;
        w = width;
    }
    int get_perimeter_length()
    {
        int perimeter;
        perimeter = (2 * h) + (2 * w);
        return perimeter;
    }
    int get_area()
    {
        int area;
        area = h * w;
        return area;
    }
};
class square : public shape
{
private:
    int s;

public:
    square(int side) { s = side; }
    int get_perimeter_length()
    {
        int perimeter;
        perimeter = 4 * s;
        return perimeter;
    }
    int get_area()
    {
        int area;
        area = s * s;
        return area;
    }
};
int main()
{
    shape *s1;
    circle c(3);
    s1 = &c;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    square s(3);
    s1 = &s;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    rectangle r(4, 5);
    s1 = &r;
    cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
    return 0;
}
