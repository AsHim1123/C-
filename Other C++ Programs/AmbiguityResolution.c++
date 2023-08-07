// Ambiguity in inheritance can be defined as when one class is derived for two or more base classes (Multiple Inheritance)
// then there are chances that the base classes have functions with the same name.
// So it will confuse derived class to choose from similar name functions.

#include <iostream>
using namespace std;

class base1
{
public:
    void message()
    {
        cout << "I love you" << endl;
    }
};
class base2
{
public:
    void message()
    {
        cout << "I miss you" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void message()
    {
        base1::message(); // Ambiguity Resolution
    }
};

int main()
{
    derived d;
    d.message();
    return 0;
}