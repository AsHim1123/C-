#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void getId()
    {
        salary = 10000;
        cout << "Enter the id of employee." << endl;
        cin >> id;
    }
    void displayId()

    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    employee fb[100];
    for (int i = 1; i <= 100; i++)
    {
        fb[i].getId();
        fb[i].displayId();
    }

    return 0;
}