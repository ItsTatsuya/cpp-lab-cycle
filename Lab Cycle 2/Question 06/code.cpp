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
        cout<<"Roll no: "<<roll<<endl;
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
        cout<<"Marks in test 1: "<<t1<<endl;
        cout<<"Marks in test 2: "<<t2<<endl;
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
        cout<<"Marks in sports: "<<s<<endl;
    }
};

class result:public test,public sports
{
    int total;
    public:
    result(int x,int y,int z,int a):student(x),test(x,y,z),sports(x,a)
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
    cout<<"Enter number of students:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter (roll no, test 1 mark, test 2 mark, sports mark): ";
        int roll,t1,t2,s;
        cin>>roll>>t1>>t2>>s;
        result r(roll,t1,t2,s);
        r.student::display();
        r.test::display();
        r.sports::display();
        r.display();
        cout<<endl;
    }
    return 0;
}