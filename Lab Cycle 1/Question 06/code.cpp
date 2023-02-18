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

        t3.minutes = minutes + t2.minutes +
                     (t3.seconds / 60);
        t3.seconds = t3.seconds % 60;

        t3.hours = hours + t2.hours +
                   (t3.minutes / 60);
        t3.minutes = t3.minutes % 60;

        return t3;
    }

    void display()
    {
        cout << "Hours: " << hours << "\nMinutes: " << minutes << "\nSeconds: " << seconds << endl;
    }
};

int main()
{

    Time t1(2, 15, 50);
    Time t2(1, 45, 45);

    Time t3 = t1 + t2;

    t3.display();

    return 0;
}