#include <iostream>
#include <string>
using namespace std;

static int counter = 1;

template <class A = int, class B = string, class C = float> // Default Multiple Parameters
class Student
{
    A roll_no;
    B name;
    C cgpa;

public:
    Student(A x, B y, C z)
    {
        roll_no = x;
        name = y;
        cgpa = z;
    }
    void display(void)
    {
        cout << "\nSTUDENT - " << counter << endl;
        cout << "Roll Number : " << roll_no << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << cgpa << endl;
        counter++;
    }
};

int main()
{
    Student< > s1(95, "Abhik", 94.75);  // No data type is needed to write as it is already defaulted.
    s1.display();

    Student< > s2(98, "Roshan", 81.50);
    s2.display();

    Student< int, int, int> s(90, 91, 92); // We can change the default according to our need.

    return 0;
}