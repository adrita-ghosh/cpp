#include <iostream>
using namespace std;

void inputMatrix(int a[10][10], int r, int c)
{
    cout << "Enter matrix elements:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void displayMatrix(int a[10][10], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void addition(int a[10][10], int b[10][10], int r, int c)
{
    int result[10][10];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Addition:\n";
    displayMatrix(result, r, c);
}

void subtraction(int a[10][10], int b[10][10], int r, int c)
{
    int result[10][10];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction:\n";
    displayMatrix(result, r, c);
}

void multiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
    int result[10][10] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication:\n";
    displayMatrix(result, r1, c2);
}

void transpose(int a[10][10], int r, int c)
{
    int result[10][10];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[j][i] = a[i][j];
        }
    }

    cout << "Transpose:\n";
    displayMatrix(result, c, r);
}

int main()
{
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    inputMatrix(a, r1, c1);

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    inputMatrix(b, r2, c2);

    do
    {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Transpose";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (r1 == r2 && c1 == c2)
                addition(a, b, r1, c1);
            else
                cout << "Matrix dimensions must be same.\n";
            break;

        case 2:
            if (r1 == r2 && c1 == c2)
                subtraction(a, b, r1, c1);
            else
                cout << "Matrix dimensions must be same.\n";
            break;

        case 3:
            if (c1 == r2)
                multiplication(a, b, r1, c1, r2, c2);
            else
                cout << "Matrix multiplication not possible.\n";
            break;

        case 4:
            cout << "Transpose of first matrix:\n";
            transpose(a, r1, c1);
            break;

        case 5:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice.";
        }

    } while (choice != 5);

    return 0;
}