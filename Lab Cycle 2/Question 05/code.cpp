#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"Value of a is "<<a<<endl;
    }
};

class B:public A
{
    int b;
    public:
    B(int x,int y):A(x)
    {
        b=y;
    }
    void display()
    {
        cout<<"Value of b is "<<b<<endl;
    }
};

class C:public B
{
    int c;
    public:
    C(int x,int y,int z):B(x,y)
    {
        c=z;
    }
    void display()
    {
        cout<<"Value of c is "<<c<<endl;
    }
};

int main()
{
    cout<<"Enter three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    C obj(a,b,c);
    obj.A::display();
    obj.B::display();
    obj.display();
    return 0;
}

