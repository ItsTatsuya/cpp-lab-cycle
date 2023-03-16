#include <iostream>
using namespace std;
class vector
{
    int x, y;
public:
    void input()
    {
        cout << "Enter the value of x: ";
        cin >> x;
        cout << "Enter the value of y: ";
        cin >> y;
    }
    void display()
    {
        cout << "The value of x: " << x << endl;
        cout << "The value of y: " << y << endl;
    }
    friend vector operator*(vector &v1, vector &v2);
    friend ostream &operator<<(ostream &out, vector &v);
    friend istream &operator>>(istream &in, vector &v);
};
vector operator*(vector &v1, vector &v2)
{
    vector temp;
    temp.x = v1.x * v2.x;
    temp.y = v1.y * v2.y;
    return temp;
}
ostream &operator<<(ostream &out, vector &v)
{
    out << "The value of x: " << v.x << endl;
    out << "The value of y: " << v.y << endl;
    return out;
}
istream &operator>>(istream &in, vector &v)
{
    cout << "Enter the value of x: ";
    in >> v.x;
    cout << "Enter the value of y: ";
    in >> v.y;
    return in;
}
int main()
{
    vector v1, v2, v3;
    cout << "Enter the values of v1: " << endl;
    cin >> v1;
    cout << "Enter the values of v2: " << endl;
    cin >> v2;
    v3 = v1 * v2;
    cout << "\nValues of v1 and v2 before multiplication:\n";
    cout << v1;
    cout << v2;
    cout << "\nValues of v3 after multiplication:\n";
    cout << v3;
    return 0;
}