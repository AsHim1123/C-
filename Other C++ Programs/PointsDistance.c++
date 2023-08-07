#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printPoint()
    {
        cout << "The point is : (" << x << "," << y << ")" << endl;
    }
    friend void distance(point, point);
};
void distance(point p1, point p2)
{
    int x_diff = (p2.x - p1.x);
    int y_diff = (p2.y - p1.y);
    float dis = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The distance is : " << dis << endl;
}

int main()
{
    point p1(2, 3);
    p1.printPoint();
    point p2(3, 4);
    p2.printPoint();

    distance(p1, p2);

    return 0;
}
