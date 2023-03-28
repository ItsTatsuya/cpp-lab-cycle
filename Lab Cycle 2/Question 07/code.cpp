#include<iostream>
using namespace std;

class alpha
{
    int a;
    public:
    alpha(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<"Value of a is "<<a<<endl;
    }
};

class beta
{
    int b;
    public:
    beta(int x)
    {
        b=x;
    }
    void display()
    {
        cout<<"Value of b is "<<b<<endl;
    }
};

class gamma:public alpha,public beta
{
    int c;
    public:
    gamma(int x,int y,int z):alpha(x),beta(y)
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
    cout<<"Enter the value of a,b and c: ";
    int a,b,c;
    cin>>a>>b>>c;
    gamma g(a,b,c);
    g.alpha::display();
    g.beta::display();
    g.display();
    return 0;
}