#include <iostream>
using namespace std;
class Y;

class X
{
    int val1;

public:
    void setData(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
    friend void swap(X &, Y &);
};
class Y
{
    int val2;

public:
    void setData(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }

    friend void swap(X &, Y &);
};

void swap(X &o1, Y &o2)
{
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = o1.val1;
}
int main()
{
    X obj1;
    obj1.setData(4);

    Y obj2;
    obj2.setData(5);

    swap(obj1, obj2);
    cout << "The value of X is " << endl;
    obj1.display();

    cout << "The value of Y is " << endl;
    obj2.display();

    return 0;
}
