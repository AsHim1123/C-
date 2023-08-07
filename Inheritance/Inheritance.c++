// Inheritance: Using the features of one class to another class (base class to derived class).

#include <iostream>
using namespace std;

class rect
{
public:
    int len;
    int bre;

    rect()
    {
        cout << "This is rect constructor.";
    }

    rect(int l, int b)
    {
        cout << "This is p constructor of rect.";
        len = l;
        bre = b;
    }
};

class cube : public rect // Inheritance property
{
public:
    int hei;

    cube(int h, int l, int b) : rect(l, b)
    {
        hei = h;
    }

    void cubeVolume()
    {
        cout << "The volume of cube is : " << (len * bre * hei);
    }
};

int main()
{
    cube c(10, 20, 30);
    c.cubeVolume();

    return 0;
}