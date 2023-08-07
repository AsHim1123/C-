#include <iostream>
#include <string>
using namespace std;

static int counter = 1;

template <class A, class B, class C> // Multiple Parameters
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
    Student<int, string, float> s1(95, "Abhik", 94.75);
    s1.display();

    Student<int, string, float> s2(98, "Roshan", 81.50);
    s2.display();

    return 0;
}