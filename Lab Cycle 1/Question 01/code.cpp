#include <iostream>

class Students
{
    std::string name;
    int roll_no;
    float marks[3];
    char grade;

public:
    void input()
    {
        std::cout << "\nEnter the Student Name:";
        std::cin >> name;

        std::cout << "Enter the RollNo: ";
        std::cin >> roll_no;

        std::cout << "Enter the 3 Marks Seperated by space: ";
        std::cin >> marks[0] >> marks[1] >> marks[2];
    }

    char calcGrade(float marks)
    {
        if (marks >= 90)
        {
            grade = 'A';
        }
        else if (marks >= 80 and marks < 90)
        {
            grade = 'B';
        }
        else if (marks >= 70 and marks < 80)
        {
            grade = 'C';
        }
        else if (marks >= 60 and marks < 70)
        {
            grade = 'D';
        }
        else if (marks >= 50 and marks < 60)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }
        return grade;
    }

    void display()
    {
        std::cout << "\n--------Student Details--------\n";
        std::cout << "Student Name: " << name << "\n";
        std::cout << "Subject 1 Grade:  " << calcGrade(marks[0]) << "\n";
        std::cout << "Subject 2 Grade:  " << calcGrade(marks[1]) << "\n";
        std::cout << "Subject 3 Grade:  " << calcGrade(marks[2]) << "\n";
        std::cout << "--------------------------------\n";
    }
};

int main()
{
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    Students s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
}
