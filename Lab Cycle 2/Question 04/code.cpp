#include <iostream>
using namespace std;
class matrix
{
    int **m;
    int r, c;
public:
    matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
        m = new int*[r];
        for (int i = 0; i < r; i++)
            m[i] = new int[c];
    }
    void input()
    {
        cout << "Enter the values of the matrix: " << endl;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                cin >> m[i][j];
    }
    void display()
    {
        cout << "The matrix is: " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cout << m[i][j] << " ";
            cout << endl;
        }
    }
    matrix operator+(matrix &m2)
    {
        matrix temp(r, c);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                temp.m[i][j] = m[i][j] + m2.m[i][j];
        return temp;
    }
    matrix operator*(matrix &m2)
    {
        matrix temp(r, m2.c);
        for (int i = 0; i < r; i++)
            for (int j = 0; j < m2.c; j++)
            {
                temp.m[i][j] = 0;
                for (int k = 0; k < c; k++)
                    temp.m[i][j] += m[i][k] * m2.m[k][j];
            }
        return temp;
    }
};
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;
    matrix m1(r1, c1), m2(r2, c2), m3(r1, c2);
    m1.input();
    m2.input();
    m3 = m1 + m2;
    cout << "\nValues of m1 and m2 before addition:\n";
    m1.display();
    m2.display();
    cout << "\nValues of m3 after addition:\n";
    m3.display();
    m3 = m1 * m2;
    cout << "\nValues of m1 and m2 before multiplication:\n";
    m1.display();
    m2.display();
    cout << "\nValues of m3 after multiplication:\n";
    m3.display();
    return 0;
}
