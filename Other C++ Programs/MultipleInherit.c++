#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{

    int a, b;

public:
    void setNum(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void function()
    {
        cout << "The addition of a and b is : " << (a + b) << endl;
        cout << "The subtraction of a and b is : " << (a - b) << endl;
        cout << "The product of a and b is : " << (a * b) << endl;
        cout << "The division of a and b is : " << (a / b) << endl;
    }
};

class scientificCalculator
{
protected:
    int x, y;

public:
    void setNumm(int num1, int num2)

    {
        x = num1;
        y - num2;
    }
    void functionn()
    {
        cout << "The square root of x is: " << sqrt(x) << endl;
        cout << "The square root of y is: " << sqrt(y) << endl;
        cout << "The cube root of x is: " << cbrt(x) << endl;
        cout << "The cube root of y is: " << cbrt(y) << endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void set(int a, int b)
    {
        simpleCalculator::setNum(a, b);
        simpleCalculator::function();
        scientificCalculator::setNumm(a, b);
        scientificCalculator::functionn();
    }
};
int main()
{
    int p, q;
    cout << "Enter any two numbers:" << endl;
    cin >> p >> q;

    hybridCalculator hc;
    hc.set(p, q);

    return 0;
}