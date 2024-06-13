#include <iostream>
using namespace std;

// Constructor: It is a function which have same name as class name but no return value.
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
    void area()
    {
        cout << "The area is : " << (length * breadth);
    }
};

int main()
{
    rectangle r(10, 20); // If we put rectangle r() then default constructor will work.
    r.area();

    return 0;
}
