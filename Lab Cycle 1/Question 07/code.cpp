#include <iostream>
using namespace std;

class Matrix
{
    int **p;
    int row, column;

public:
    Matrix() {}
    Matrix(int x, int y)
    {
        row = x;
        column = y;
        if ((row > 0) && (column > 0))
        {
            p = new int *[row];
            for (int i = 0; i < row; i++)
            {
                p[i] = new int[column];
            }
        }
    }
    ~Matrix()
    {
        for (int i = 0; i < row; i++)
            delete p[i];
        delete p;
        cout << "Memory Cleared!" << endl;
    }
    void matrix_add(Matrix &x, Matrix &y);
    void matrix_mult(Matrix &x, Matrix &y);
    void matrix_transpose(Matrix &x);
    int matrix_trace(void);
    void getdata(void);
    void display();
};

void Matrix::matrix_add(Matrix &x, Matrix &y)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            p[i][j] = x.p[i][j] + y.p[i][j];
        }
    }
}

void Matrix::matrix_mult(Matrix &x, Matrix &y)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            p[i][j] = x.p[i][j] * y.p[i][j];
        }
    }
}

int Matrix::matrix_trace(void)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + p[i][i];
    }
    return sum;
}

void Matrix::getdata(void)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter Elements for Row:" << i + 1 << " | Column:" << j + 1 << ": ";
            cin >> p[i][j];
        }
    }
}

void Matrix::matrix_transpose(Matrix &x)
{
    int temp;
    for (int i = 0; i < x.row; i++)
    {
        for (int j = i + 1; j < x.column; j++)
        {
            temp = x.p[i][j];
            x.p[i][j] = x.p[j][i];
            x.p[j][i] = temp;
        }
    }
}

void Matrix::display()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << p[i][j] << "  ";
        }
        cout << "\n";
    }
}

int main()
{
    int row1, row2, column1, column2, choice;
    cout << "\nEnter the number of rows and columns of Matrix 1: ";
    cin >> row1 >> column1;
    Matrix mat1(row1, column1);
    cout << "\nEnter the values for Matrix 1\n";
    mat1.getdata();

    cout << "\nEnter the number of rows and columns of Matrix 2: ";
    cin >> row2 >> column2;
    Matrix mat2(row2, column2);
    cout << "\nEnter the values for Matrix 2\n";
    mat2.getdata();
    while (true)
    {
        cout << "\n----MENU----"
             << "\n1.Display both Matrix"
             << "\n2.Transpose of Matrix"
             << "\n3.Trace of Matrix"
             << "\n4.Add Matrix"
             << "\n5.Multiply Matrix"
             << "\n6.Exit"
             << "\nEnter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "\nMatrix 1\n";
            mat1.display();
            cout << "\nMatrix 2\n";
            mat2.display();
            break;
        }
        case 2:
        {
            cout << "\nThe Transpose of Matrix 1: \n";
            mat1.matrix_transpose(mat1);
            mat1.display();
            cout << "\nThe Transpose of Matrix 2: \n";
            mat2.matrix_transpose(mat2);
            mat2.display();
            break;
        }
        case 3:
        {
            cout << "\nThe Trace of the Matrix 1: " << mat1.matrix_trace() << "\n";
            cout << "The Trace of the Matrix 2: " << mat2.matrix_trace() << "\n";
            break;
        }
        case 4:
        {
            if (row1 != row2 || column1 != column2)
            {
                cout << "\nMatrix should have equal rows and columns for adding";
            }
            else
            {
                cout << "\nThe sum of Matrix 1 and Matrix 2 is: \n";
                Matrix mat3(row1, column1);
                mat3.matrix_add(mat1, mat2);
                mat3.display();
                break;
            }
        case 5:
        {
            if (column1 == row2)
            {
                cout<<"\nThe multiplied Matrix is:\n";
                Matrix mat4(row1, column1);
                mat4.matrix_mult(mat1, mat2);
                mat4.display();
            }
            else
            {
                cout << "\nRequired order for multiplication not available!\n";
            }
            break;
        }
        case 6:
        {
            return 0;
        }
        }
        }
    }
}