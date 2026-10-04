#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    char name[64];
    int age;
    char address[64];
    float salary;

    void input()
    {
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 64);

        cout << "Enter age: ";
        cin >> age;

        cin.ignore();

        cout << "Enter address: ";
        cin.getline(address, 64);

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nAddress: " << address;
        cout << "\nSalary: " << salary << endl;
    }

    inline int getAge()
    {
        return age;
    }
};

int main()
{
    Person p[10];
    int n;

    cout << "Enter number of persons (maximum 10): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << ":\n";
        p[i].input();
    }

    int youngest = 0;
    int eldest = 0;

    for (int i = 1; i < n; i++)
    {
        if (p[i].getAge() < p[youngest].getAge())
            youngest = i;

        if (p[i].getAge() > p[eldest].getAge())
            eldest = i;
    }

    cout << "\n--- Person Details ---\n";

    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }

    cout << "\nYoungest Person: " << p[youngest].name;
    cout << "\nAge: " << p[youngest].age << endl;

    cout << "\nEldest Person: " << p[eldest].name;
    cout << "\nAge: " << p[eldest].age << endl;

    return 0;
}