//Matrix Multiplication.............
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int r1, r2, c1, c2;
    int mat1[50][50], mat2[50][50], mat3[50][50];
    int sum = 0;
    cout << "Enter the rows and columns of a matrix 1.";
    cin >> r1 >> c1;
    cout << "Enter the rows and columns of a matrix 2.";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Multiplication is not possible";
        exit(0);
    }
    cout << "Enter the elements of the matrix 1 ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements of the matrix 2 ";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum = sum + mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
            sum = 0;
        }
    }
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}