#include <iostream>
#include <cstring>
using namespace std;

class Strings
{
    char *name;
    int length;

public:
    Strings()
    {
        length = 0;
        name = new char[length + 1];
    }
    void getString(char *txt);
    void compare(const Strings &, const Strings &);
    void concatenate(const Strings &, const Strings &);
    void displayLength();
};

void Strings::getString(char *txt)
{
    length = strlen(txt);
    name = new char[length + 1];
    strcpy(name, txt);
}

void Strings::concatenate(const Strings &string1, const Strings &string2)
{
    length = string1.length + string2.length;
    delete name;
    name = new char[length + 1];
    strcpy(name, string1.name);
    strcat(name, string2.name);
    cout << name << endl;
}

void Strings::compare(const Strings &string1, const Strings &string2)
{
    if (strcmp(string1.name, string2.name) > 0)
        cout << string1.name << " is greater than " << string2.name << endl;
    
    else if (strcmp(string1.name, string2.name) < 0)
        cout << string1.name << " is less than " << string2.name << endl;
    
    else
        cout << "Both strings are equal" << endl;
}

void Strings::displayLength()
{
    cout << "The Length of string is " << length << endl;
}

int main()
{
    char name1[50], name2[50];
    Strings string1, string2, result;
    cout << "Enter your First String: ";
    cin >> name1;
    cout << "Enter your Second String: ";
    cin >> name2;
    string1.getString(name1);
    string2.getString(name2);

    cout << "\nFirst String" << endl;
    string1.displayLength();
    cout << "\nSecond String" << endl;
    string2.displayLength();
    cout << "\nConcatenating the two strings: ";
    result.concatenate(string1, string2);
    cout << "\nComparing the two strings\n";
    result.compare(string1, string2);
    return 0;
}