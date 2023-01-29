#include <iostream>
#include <cmath>

void area(int length, int breadth)
{
    int area;
    area = length * breadth;
    std::cout << "The Area of the Rectangle is " << area;
}

void area(int side)
{
    int area;
    area = side * side;
    std::cout << "The Area of the Square is " << area;
}

void area(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    std::cout << "The Area of the Circle is " << area;
}

void area(int tside1, int tside2, int tside3)
{
    float area;
    float s = (tside1 + tside2 + tside3) / 2;
    area = std::sqrt(s * (s - tside1) * (s - tside2) * (s - tside3));
    std::cout << "The Area of the Triangle is " << area;
}

void area(float height, float base)
{
    float area;
    area = base * height;
    std::cout << "The Area of the Parallelogram is " << area;
}

int main()
{
    int l, b;
    std::cout << "Enter the Length & Breadth of Rectangle:  ";
    std::cin >> l >> b;
    area(l, b);

    float radius;
    std::cout << "\nEnter the Radius of the Circle: ";
    std::cin >> radius;
    area(radius);

    int tside1, tside2, tside3;
    std::cout << "\nEnter the Sides of Triangle: ";
    std::cin >> tside1 >> tside2 >> tside3;
    area(tside1, tside2, tside3);

    int side;
    std::cout << "\nEnter the Side of the Square: ";
    std::cin >> side;
    area(side);

    float height, base;
    std::cout << "\nEnter the Base and height of Parallelogram: ";
    std::cin >> base >> height;
    area(base, height);

    return 0;
}
