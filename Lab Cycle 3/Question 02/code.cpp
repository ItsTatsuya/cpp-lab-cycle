#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    T add()
    {
        return num1 + num2;
    }
    T sub()
    {
        return num1 - num2;
    }
    T mul()
    {
        return num1 * num2;
    }
    T div()
    {
        return num1 / num2;
    }
};

int main(){
    string type;
    cout<<"Enter the data type of the numbers (int,float,double):";
    cin>>type;

    if(type=="int" or type== "i"){
        int n1,n2;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        Calculator<int> c(n1,n2);
        cout<<"Addition: "<<c.add()<<endl;
        cout<<"Subtraction: "<<c.sub()<<endl;
        cout<<"Multiplication: "<<c.mul()<<endl;
        cout<<"Division: "<<c.div()<<endl;
    }
    else if(type=="float" || type== "f"){
        float n1,n2;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        Calculator<float> c(n1,n2);
        cout<<"Addition: "<<c.add()<<endl;
        cout<<"Subtraction: "<<c.sub()<<endl;
        cout<<"Multiplication: "<<c.mul()<<endl;
        cout<<"Division: "<<c.div()<<endl;
    }
    else if(type=="double" || type== "d"){
        double n1,n2;
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
        Calculator<double> c(n1,n2);
        cout<<"Addition: "<<c.add()<<endl;
        cout<<"Subtraction: "<<c.sub()<<endl;
        cout<<"Multiplication: "<<c.mul()<<endl;
        cout<<"Division: "<<c.div()<<endl;
    }
    else{
        cout<<"Invalid data type";
    }
    return 0;

}