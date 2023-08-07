// Person can be student as well as employee. Person --- Student and employee!

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

class student : public person
{
private:
    int rn;

public:
    void getRn()
    {
        cout << "Enter Roll number: " << endl;
        cin >> rn;
    }

    void displayRn()
    {
        cout << "Roll number is : " << rn << endl;
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
        cout << "Enter post: " << endl;
        cin >> post;

        cout << "Enter salary: " << endl;
        cin >> salary;
    }

    void displayeData()
    {
        cout << "Post is " << post << " and salary is " << salary << endl;
    }
};

int main()
{
    student s1;
    s1.pData();
    s1.getRn();
    s1.displaypData();
    s1.displayRn();

    employee e1;
    e1.pData();
    e1.eData();
    e1.displaypData();
    e1.displayeData();

    return 0;
}