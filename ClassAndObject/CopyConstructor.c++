#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle() // Default constructor
    {
        length = 1;
        breadth = 1;
    }
    rectangle(int l, int b) // Paramterized Constructor
    {
        length = l;
        breadth = b;
    }

    rectangle(rectangle &r1) // Copy Constructor
    {
        length = r1.length;
        breadth = r1.breadth;
    }
    void area()
    {
        cout << "The area is : " << (length * breadth);
    }
};

int main()
{
    rectangle r1(10, 20);
    rectangle r(r1); // Copy constructor object
    r1.area();

    return 0;
}
