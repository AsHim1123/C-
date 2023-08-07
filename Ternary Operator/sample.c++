// Syntax: condition ? write value : wrong;

#include <iostream>
using namespace std;

int main()
{
    int age = 30;

    int a = (age == 30) ? a = 1 : a = 0;

    cout << "Value of a is: " << a;
    return 0;
}
