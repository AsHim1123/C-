#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return (length * breadth);
    }

    int perimeter();
};

int rectangle::perimeter() // Scope Resolution Operator: It can be used outdside the class for the fumction.
{
    return 2 * (length + breadth);
}

int main()
{
    rectangle r;
    r.length = 10;
    r.breadth = 5;

    cout << r.area() << endl;
    cout << r.perimeter();

    return 0;
}