#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
private:
    char name[64];
    int id;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:
    Person()
    {
        basicSalary = 0;
        hra = 0;
        da = 0;
        grossSalary = 0;
    }

    Person(char n[], int i, float basic)
    {
        int j = 0;

        while (n[j] != '\0')
        {
            name[j] = n[j];
            j++;
        }

        name[j] = '\0';

        id = i;
        basicSalary = basic;

        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        grossSalary = basicSalary + hra + da;
    }

    void displaySalarySlip()
    {
        cout << "\n========== SALARY SLIP ==========\n";
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA (20%)     : " << hra << endl;
        cout << "DA (10%)      : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
        cout << "=================================\n";
    }
};

int main()
{
    char name[64];
    int id;
    float basicSalary;

    cout << "Enter employee name: ";
    cin.getline(name, 64);

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    Person p(name, id, basicSalary);

    p.displaySalarySlip();

    return 0;
}