#include <iostream>
using namespace std;

class Matrix
{
    int **p;
    int row, column;

public:
    Matrix(int x, int y);
    void getdata();
    void matrix_add();
    void matrix_mult();
    void matrix_transpose();
    void matrix_trace();


};