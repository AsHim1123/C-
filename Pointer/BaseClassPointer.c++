#include <iostream>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout << "This is base function 1." << endl;
    }
    void fun2()
    {
        cout << "This is base function 2." << endl;
    }
};

class derived : public base
{
    void fun3()
    {
        cout << "This is derived function 3." << endl;
    }
};

int main()
{
    base *p;
    p = new derived();
    p->fun1();

    return 0;
}