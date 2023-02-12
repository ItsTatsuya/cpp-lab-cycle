#include <iostream>
using namespace std;

class complex
{
    int real;
    float img;

public:
    void input()
    {
        cout << "Enter the real and imaginary part of complex number : ";
        cin >> real >> img;
    }
    void display()
    {
        if (img < 0)
            std::cout << real << img << "i\n";
        else
            std::cout << real << "+" << img << "i\n";
    }
    friend complex sum(complex x, complex y);
};

complex sum(complex x, complex y)
{
    complex com3;
    com3.real = x.real + y.real;
    com3.img = x.img + y.img;
    return com3;
}

int main(){
    complex com1,com2,com3;
    
    com1.input();
    com1.display();

    com2.input();
    com2.display();

    cout<<"The sum of complex 1 & 2: ";
    com3 = sum(com1,com2);
    com3.display();
    return 0;
}