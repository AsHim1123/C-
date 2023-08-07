#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void setComplexSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printComplex()
    {
        cout << "The complex number is : " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printComplex();

    c2.setData(3, 4);
    c2.printComplex();

    c3.setComplexSum(c1, c2);
    c3.printComplex();

    return 0;
}