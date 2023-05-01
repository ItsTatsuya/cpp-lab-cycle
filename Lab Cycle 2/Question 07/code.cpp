#include<iostream>
using namespace std;

class alpha
{
    int a;
    public:
        alpha(int a1)
        {
            a = a1;
            cout << "Alpha initialized\n";
        }
        void show_a(void)
        {
            cout << "a = " << a << "\n";
        }
};

class beta
{
    int b;
    public:
        beta(float b1)
        {
            b = b1;
            cout << "Beta initialized\n";
        }
        void show_b(void)
        {
            cout << "b = " << b << "\n";
        }
};

class gamma : public beta, public alpha
{
    int g;
    public:
        gamma(int a1, int b1, int g1) : alpha(a1), beta(b1)
        {
            g=g1;
            cout << "Gamma initialized\n";
        }
        void show_g(void)
        {
            cout << "g = " << g << "\n";
        }
};  

int main()
{
    int a, b, g;
    cout<<"Enter values for a in alpha, b in beta and g in gamma: ";
    cin>>a>>b>>g;
    gamma g1(a, b, g);
    cout<<"\n";
    g1.show_a();
    g1.show_b();
    g1.show_g();
    return 0;
}
