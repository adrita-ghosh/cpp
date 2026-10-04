#include <iostream>
using namespace std;

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call By Value:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

void callByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Call By Reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore Call By Value:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    callByValue(a, b);

    cout << "After Call By Value:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "\nBefore Call By Reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    callByReference(a, b);

    cout << "After Call By Reference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}