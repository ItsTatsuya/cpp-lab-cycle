#include <iostream>

class complex
{
    int real;
    float img;

public:
    complex();
    complex(int x);
    complex(int x, float y);
    complex operator + (complex &c2);
    void display(void);
};

complex::complex()
{
    real = 0;
    img = 0;
}

complex::complex(int x)
{
    real = x;
    img = float(x);
}

complex::complex(int x, float y)
{
    real = x;
    img = y;
}

complex complex::operator+(complex &c2){
    complex c3;
    c3.real = real+c2.real;
    c3.img = img + c2.img;
    return c3;
}

void complex::display() {
    std::cout << real << " + " << img << "i" << "\n";
}

int main(){
    complex c1,c2;
    int x,y;
    for(int i=0;i<2;i++){
        std::cout<<"Enter the real part and img part of Complex "<<i+1<<":";
        std::cin>>x>>y;
        if(i==0){
            c1 = complex(x,y);
        }
        else{
            c2 = complex(x,y);
        }
    }
    complex c3 = c1 + c2;
    std::cout<<"Complex 1: ";
    c1.display();
    std::cout<<"Complex 2: ";
    c2.display();
    std::cout<<"Complex 3: ";
    c3.display();
    return 0;
}