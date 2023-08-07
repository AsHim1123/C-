#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void getData()
    {
        cout << "Enter the id." << endl;
        cin >> id;
        count++;
    }

    void displayData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
};
int employee::count;

int main()
{
    employee e;
    e.getData();
    e.displayData();

    return 0;
}