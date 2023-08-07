#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int sumRealComplex(complex, complex);
};

class complex
{
    int a;
    int b;

public:
    void getData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend int calculator ::sumRealComplex(complex, complex);
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex c1, c2;
    c1.getData(1, 2);
    c2.getData(3, 4);

    calculator calc;
    int res = calc.sumRealComplex(c1, c2);
    cout << "The sum of real part is : " << res;

    return 0;
}