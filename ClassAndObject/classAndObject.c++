#include <iostream>
using namespace std;

class circle
{
public:
    double PI = 3.14;
    double radius;

    double findArea()
    {
        double Area = PI * radius * radius;
        return Area;
    }
};

int main()
{
    circle c1;
    c1.radius = 2;

    double areaOfc1 = c1.findArea();
    cout << "The area of c1 is : " << areaOfc1;
    return 0;
}