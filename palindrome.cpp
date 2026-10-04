#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, original, reverse = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";

    string str, rev = "";

    cout << "\nEnter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    if (str == rev)
        cout << "\nString is Palindrome";
    else
        cout << "\nString is not Palindrome";

    return 0;
}