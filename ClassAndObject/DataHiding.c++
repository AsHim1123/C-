#include <iostream>
using namespace std;

class rectangle
{
private: // Data can be hide using private.
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }

    void getArea()
    {
        cout << "The area is : " << length * breadth;
    }
};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    r.getArea();
    return 0;
}
