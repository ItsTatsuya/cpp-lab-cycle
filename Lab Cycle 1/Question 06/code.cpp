#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    Time operator+(Time &t2)
    {
        Time t3;

        t3.seconds = seconds + t2.seconds;

        t3.minutes = minutes + t2.minutes + (t3.seconds / 60);
        t3.seconds = t3.seconds % 60;

        t3.hours = hours + t2.hours + (t3.minutes / 60);
        t3.minutes = t3.minutes % 60;

        return t3;
    }

    void display()
    {
        cout << "\nTime: " << hours <<" Hrs"<< ":" << minutes <<" Mins"<< ":" << seconds <<" Sec" << endl;
    }
};

int main()
{
    Time t1, t2;
    int h, m, s;

    cout << "\nEnter time 1: " << endl;
    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;
    t1 = Time(h, m, s);

    cout << "\nEnter time 2: " << endl;
    cout << "Hours: ";
    cin >> h;
    cout << "Minutes: ";
    cin >> m;
    cout << "Seconds: ";
    cin >> s;
    t2 = Time(h, m, s);

    Time t3 = t1 + t2;
    cout << "\nTime after addition of 1 and 2: ";
    t3.display();

    return 0;
}