#include <iostream>
using namespace std;

void transposeMatrix(int rows, int cols, int matrix[][10], int transposed[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int matrix[][10])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[10][10], transposed[10][10];

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal matrix:" << endl;
    printMatrix(rows, cols, matrix);

    transposeMatrix(rows, cols, matrix, transposed);

    cout << "\nTransposed matrix:" << endl;
    printMatrix(cols, rows, transposed);

    return 0;
}
