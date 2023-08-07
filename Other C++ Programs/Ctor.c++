#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex();

    void print()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex()
{
    a = 10;
    b = 20;
}
int main()
{
    complex c;
    c.print();

    return 0;
}