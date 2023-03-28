#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void getdata() = 0;
    virtual void area() = 0;
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    void getdata()
    {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
    void area()
    {
        cout << "Area of rectangle is " << length * breadth << endl;
    }
};

class Triangle : public Shape
{
    float base, height;

public:

    void getdata()
    {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
    void area()
    {
        cout << "Area of triangle is " << 0.5 * base * height << endl;
    }
};

int main()
{
    Shape *s;
    Rectangle r;
    Triangle t;
    s = &r;
    s->getdata();
    s->area();
    s = &t;
    s->getdata();
    s->area();
    return 0;
}