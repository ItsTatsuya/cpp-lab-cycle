#include <iostream>
using namespace std;
class complex
{
    int real, img;
public:
    void input()
    {
        cout << "\nEnter the value of real: ";
        cin >> real;
        cout << "Enter the value of img: ";
        cin >> img;
    }
    void display()
    {
        cout << "\nThe value of real: " << real << endl;
        cout << "The value of img: " << img << endl;
    }
    friend complex operator+(complex &c1, complex &c2);
    friend complex operator*(complex &c1, complex &c2);
};
complex operator+(complex &c1, complex &c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
complex operator*(complex &c1, complex &c2)
{
    complex temp;
    temp.real = c1.real * c2.real;
    temp.img = c1.img * c2.img;
    return temp;
}
int main()
{
    complex c1, c2, c3, c4;
    cout << "\nEnter the values for first complex number:\n";
    c1.input();
    cout << "\nEnter the values for second complex number:\n";
    c2.input();
    c3 = c1 + c2;
    c4 = c1 * c2;
    cout << "\nValues before addition:\n";
    c1.display();
    c2.display();
    cout << "\nValues after addition:\n";
    c3.display();
    cout << "\nValues before multiplication:\n";
    c1.display();
    c2.display();
    cout << "\nValues after multiplication:\n";
    c4.display();
    return 0;
}

