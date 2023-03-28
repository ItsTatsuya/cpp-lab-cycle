#include <iostream>
using namespace std;

class Shapes
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class Circle : public Shapes
{
    float r;

public:
    void getdata()
    {
        cout << "Enter radius of circle: ";
        cin >> r;
    }
    void display()
    {
        cout << "Area of circle is " << 3.14 * r * r << endl;
    }
};

class Square : public Shapes
{
    float s;

public:
    void getdata()
    {
        cout << "\nEnter side of square: ";
        cin >> s;
    }
    void display()
    {
        cout << "Area of square is " << s * s << endl;
    }
};

class Ellipse : public Shapes
{
    float a, b;

public:
    void getdata()
    {
        cout << "\nEnter major axis of ellipse: ";
        cin >> a;
        cout << "Enter minor axis of ellipse: ";
        cin >> b;
    }
    void display()
    {
        cout << "Area of ellipse is " << 3.14 * a * b << endl;
    }
};

class Rectangle : public Shapes
{
    float l, b;

public:
    void getdata()
    {
        cout << "\nEnter length of rectangle: ";
        cin >> l;
        cout << "Enter breadth of rectangle: ";
        cin >> b;
    }
    void display()
    {
        cout << "Area of rectangle is " << l * b << endl;
    }
};

int main()
{
    Shapes *s;
    Circle c;
    Square sq;
    Ellipse e;
    Rectangle r;
    bool loop = true;
    while (loop == true)
    {
        cout << "\n1. Circle \t 2. Square \t 3. Ellipse \t 4. Rectangle \t 5. Exit" << endl;
        cout << "Enter your choice: ";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            s = &c;
            s->getdata();
            s->display();
            break;
        case 2:
            s = &sq;
            s->getdata();
            s->display();
            break;
        case 3:
            s = &e;
            s->getdata();
            s->display();
            break;
        case 4:
            s = &r;
            s->getdata();
            s->display();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice";
        }
    }
}