#include <iostream>
#include <cstring>
using namespace std;

class student
{
    protected:
        int roll_no;
        char name[20];
    public:
        student(int r, char n[])
        {
            roll_no = r;
            strcpy(name, n);
        }
        void display()
        {
            cout<<"Roll No: "<<roll_no<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

class marks: public student
{
    protected:
        int m1, m2, m3;
    public:
        marks(int r, char n[], int m1, int m2, int m3): student(r, n)
        {
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }
        void display()
        {
            student::display();
            cout<<"Marks 1: "<<m1<<endl;
            cout<<"Marks 2: "<<m2<<endl;
            cout<<"Marks 3: "<<m3<<endl;
        }
};

class result: public marks
{
    int total;
    float avg;
    public:
        result(int r, char n[], int m1, int m2, int m3): marks(r, n, m1, m2, m3)
        {
            total = m1 + m2 + m3;
            avg = total / 3.0;
        }
        void display()
        {
            marks::display();
            cout<<"Total: "<<total<<endl;
            cout<<"Average: "<<avg<<endl;
        }
};

int main()
{   
    int n, r, m1, m2, m3;
    cout<<"Enter the number of students: ";
    cin>>n;
    result *s[n];
    for(int i = 0; i < n; i++)
    {   
        cout<<"Student "<<i + 1<<endl;
        cout<<"Enter the roll no: ";
        cin>>r;
        cout<<"Enter the name: ";
        char n[20];
        cin>>n;
        cout<<"Enter the marks 1: ";
        cin>>m1;
        cout<<"Enter the marks 2: ";
        cin>>m2;
        cout<<"Enter the marks 3: ";
        cin>>m3;
        s[i] = new result(r, n, m1, m2, m3);
        cout<<endl;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"Student "<<i + 1<<endl;
        s[i]->display();
        cout << endl;
    }
    return 0;
}
