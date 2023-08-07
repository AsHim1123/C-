#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "Base 1 constructor called." << endl;
    }
    void printBase1()
    {
        cout << "The value of data 1 is : " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
        cout << "Base 2 constructor called." << endl;
    }
    void printBase2()
    {
        cout << "The value of data 2 is : " << data2 << endl;
    }
};

   class derived : public base1, public base2 // Order of execution of constructor is : base1-->base2->derived
// class derived : public base2, public base1    Order of execution of constructor is : base2-->base1->derived

{
public:
    derived(int a, int b) : base1(a), base2(b)
    {
        cout << "Derived Construtor called." << endl;
    }
};

int main()
{
    derived d(4, 5);
    d.printBase1();
    d.printBase2();

    return 0;
}