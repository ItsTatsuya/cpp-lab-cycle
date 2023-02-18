#include <iostream>
using namespace std;

class Matrix
{
    int **p;
    int row, column;

public:
    Matrix(int x, int y)
    {
        row = x;
        column = y;
        p = new int *[row];
        for (int i = 0; i < row; ++i)
        {
            p[i] = new int[column];
        }
    }
    void getdata();
    void putdata();
    ~Matrix()
    {
        cout << "\nMemory freed up!\n";
        for (int i = 0; i < row; i++)
        {
            delete p[i];
        }
        delete p;
    }
};

void Matrix::getdata()
{
    cout << "\nEnter the Values\n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Row " << i + 1 << " | "
                 << "Column " << j + 1 << " : ";
            cin >> p[i][j];
        }
    }
}

void Matrix::putdata()
{
    cout << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << p[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int x, y;
    cout << "Enter the rows of matrix: ";
    cin >> x;
    cout << "Enter the column of matrix: ";
    cin >> y;
    Matrix Object(x, y);
    Object.getdata();
    Object.putdata();
    return 0;
}