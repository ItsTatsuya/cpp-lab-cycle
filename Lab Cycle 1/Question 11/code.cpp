#include <iostream>
using namespace std;
class class_2;
class class_1
{
    int key_1;

public:
    void input()
    {
        cout << "Enter key for Class 1: ";
        cin >> key_1;
    }

    void display()
    {
        cout << "The key of Class 1: " << key_1 << endl;
    }
    friend void connect(class_1 &x, class_2 &y);
};

class class_2
{
    int key_2;

public:
    void input()
    {
        cout << "Enter key for Class 2: ";
        cin >> key_2;
    }

    void display()
    {
        cout << "The key of Class 2: " << key_2 << endl;
    }
    friend void connect(class_1 &x, class_2 &y);
};

void connect(class_1 &x, class_2 &y)
{
    int temp = x.key_1;
    x.key_1 = y.key_2;
    y.key_2 = temp;
}

int main(){
    class_1 ob1;
    class_2 ob2;
    ob1.input();
    ob2.input();

    cout<<"\nValues of keys before interchanging:\n";
    ob1.display();
    ob2.display();

    cout<<"\nValues of keys after interchanging:\n";
    connect(ob1,ob2);
    ob1.display();
    ob2.display();
    return 0;
}