#include<iostream>
using namespace std;

class Shapes
{
    public:
    virtual void getdata()=0;
    virtual void display()=0;
};

class Circle:public Shapes
{
    float r;
    public:
    void getdata()
    {
        cout<<"Enter radius of circle: ";
        cin>>r;
    }
    void display()
    {
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
};

class Square:public Shapes
{
    float s;
    public:
    void getdata()
    {
        cout<<"Enter side of square: ";
        cin>>s;
    }
    void display()
    {
        cout<<"Area of square is "<<s*s<<endl;
    }
};

class Ellipse:public Shapes
{
    float a,b;
    public:
    void getdata()
    {
        cout<<"Enter major axis of ellipse: ";
        cin>>a;
        cout<<"Enter minor axis of ellipse: ";
        cin>>b;
    }
    void display()
    {
        cout<<"Area of ellipse is "<<3.14*a*b<<endl;
    }
};

class Rectangle:public Shapes
{
    float l,b;
    public:
    void getdata()
    {
        cout<<"Enter length of rectangle: ";
        cin>>l;
        cout<<"Enter breadth of rectangle: ";
        cin>>b;
    }
    void display()
    {
        cout<<"Area of rectangle is "<<l*b<<endl;
    }
};

int main()
{
    Shapes *s;
    Circle c;
    Square sq;
    Ellipse e;
    Rectangle r;
    s=&c;
    s->getdata();
    s->display();
    s=&sq;
    s->getdata();
    s->display();
    s=&e;
    s->getdata();
    s->display();
    s=&r;
    s->getdata();
    s->display();
    return 0;
}