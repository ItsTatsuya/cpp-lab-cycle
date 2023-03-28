#include <iostream>
using namespace std;
class vector
{
    int x, y;
public:
    void input()
    {
        cout << "\nEnter the value of x: ";
        cin >> x;
        cout << "Enter the value of y: ";
        cin >> y;
    }
    void display()
    {
        cout << "The value of x: " << x << endl;
        cout << "The value of y: " << y << endl;
    }
    bool operator==(vector &v)
    {
        if (x == v.x && y == v.y)
            return true;
        else
            return false;
    }
    bool operator!=(vector &v)
    {
        if (x != v.x || y != v.y)
            return true;
        else
            return false;
    }
    bool operator<(vector &v)
    {
        if (x < v.x && y < v.y)
            return true;
        else
            return false;
    }
    bool operator<=(vector &v)
    {
        if (x <= v.x && y <= v.y)
            return true;
        else
            return false;
    }
    bool operator>(vector &v)
    {
        if (x > v.x && y > v.y)
            return true;
        else
            return false;
    }
    bool operator>=(vector &v)
    {
        if (x >= v.x && y >= v.y)
            return true;
        else
            return false;
    }
};
int main()
{
    vector v1, v2;
    v1.input();
    v2.input();
    
    cout << "\nVector 1" << endl;
    v1.display();
    cout << "\nVector 2" << endl;
    v2.display();
    cout<<endl;

    if (v1 == v2)
        cout << "v1 is equal to v2" << endl;
    else
        cout << "v1 is not equal to v2" << endl;
    if (v1 != v2)
        cout << "v1 is not equal to v2" << endl;
    else
        cout << "v1 is equal to v2" << endl;
    if (v1 < v2)
        cout << "v1 is less than v2" << endl;
    else
        cout << "v1 is not less than v2" << endl;
    if (v1 <= v2)
        cout << "v1 is less than or equal to v2" << endl;
    else
        cout << "v1 is not less than or equal to v2" << endl;
    if (v1 > v2)
        cout << "v1 is greater than v2" << endl;
    else
        cout << "v1 is not greater than v2" << endl;
    if (v1 >= v2)
        cout << "v1 is greater than or equal to v2" << endl;
    else
        cout << "v1 is not greater than or equal to v2" << endl;
    return 0;
}
