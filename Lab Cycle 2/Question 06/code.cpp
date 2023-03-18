/* Write a C++ program to design a student class representing student roll no. and
a test class (derived class of student) representing the scores of the student in
various subjects and sports class representing the score in sports. The sports and
test class should be inherited by a result class having the functionality to add
the scores and display the final result for a student. Demonstrate the concept of
Virtual base class on Hybrid inheritance.*/

#include<iostream>
using namespace std;

class student
{
    int roll;
    public:
    student(int x)
    {
        roll=x;
    }
    void display()
    {
        cout<<"Roll no. is "<<roll<<endl;
    }
};

class test:virtual public student
{
    int t1,t2;
    public:
    test(int x,int y,int z):student(x)
    {
        t1=y;
        t2=z;
    }
    void display()
    {
        cout<<"Marks in test 1 is "<<t1<<endl;
        cout<<"Marks in test 2 is "<<t2<<endl;
    }
};

class sports:virtual public student
{
    int s;
    public:
    sports(int x,int y):student(x)
    {
        s=y;
    }
    void display()
    {
        cout<<"Marks in sports is "<<s<<endl;
    }
};

class result:public test,public sports
{
    int total;
    public:
    result(int x,int y,int z,int a,int b):student(x),test(x,y,z),sports(x,a)
    {
        total=y+z+a;
    }
    void display()
    {
        cout<<"Total marks is "<<total<<endl;
    }
};

int main()
{
    result obj(1,10,20,30,40);
    obj.student::display();
    obj.test::display();
    obj.sports::display();
    obj.result::display();
    return 0;
}