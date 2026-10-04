#include <iostream>
using namespace std;

class Shape
{
private:
    float radius;
    float length;
    float width;

public:
    Shape()
    {
        radius = 0;
        length = 0;
        width = 0;
    }

    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    void circlePerimeter()
    {
        cout << "Perimeter of Circle = " << 2 * 3.14159 * radius << endl;
    }

    void rectanglePerimeter()
    {
        cout << "Perimeter of Rectangle = " << 2 * (length + width) << endl;
    }

    ~Shape()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    float radius, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    Shape s(radius, length, width);

    s.circlePerimeter();
    s.rectanglePerimeter();

    return 0;
}