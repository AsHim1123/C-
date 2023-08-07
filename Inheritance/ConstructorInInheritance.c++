#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "This is default ctor of base." << endl;
    }
    base(int a)
    {
        cout << "This is parameterized ctor of base." << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "This is default ctor of derived." << endl;
    }
    derived(int a) : base(a)
    {
        cout << "This is parameterized ctor of derived." << endl;
    }
};

int main()

{
    derived d(1);

    return 0;
}