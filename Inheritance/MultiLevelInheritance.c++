// Student --- Exam --- Result

#include <iostream>
using namespace std;

class student
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

class exam : public student
{
protected:
    float marks1, marks2;

public:
    void getMarks()
    {
        cout << "Enter the marks of subject 1 : " << endl;
        cin >> marks1;
        cout << "Enter the marks of subject 2 : " << endl;
        cin >> marks2;
    }

    void displayMarks()
    {
        cout << "Sub 1 Marks: " << marks1 << endl;
        cout << "Sub 2 Marks: " << marks2 << endl;
    }
};

class result : public exam
{
private:
    float total;

public:
    void calculateTotal()
    {
        total = marks1 + marks2;
    }

    void displayResult()
    {
        cout << "The total is : " << total << endl;
    }
};

int main()
{
    result r;
    r.getRn();
    r.getMarks();
    r.calculateTotal();

    cout << "After Result: " << endl;

    r.displayRn();
    r.displayMarks();
    r.displayResult();

    return 0;
}