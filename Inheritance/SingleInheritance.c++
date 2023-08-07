#include <iostream>
using namespace std;

class person
{
public:
    int id;
    string name;

    void pData()
    {
        cout << "Enter id: " << endl;
        cin >> id;

        cout << "Enter name: " << endl;
        cin >> name;
    }

    void displaypData()
    {
        cout << "Id is " << id << " and name is " << name << endl;
    }
};

class employee : public person
{
private:
    string post;
    double salary;

public:
    void eData()
    {
        pData();
        cout << "Enter post: " << endl;
        cin >> post;

        cout << "Enter salary: " << endl;
        cin >> salary;
    }

    void displayeData()
    {
        displaypData();
        cout << "Post is " << post << " and salary is " << salary << endl;
    }
};

int main()
{
    employee e;
    e.eData();
    e.displayeData();

    return 0;
}
