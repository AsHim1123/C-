#include <iostream>
using namespace std;

// Forward Declaration
class Square;
class Rect
{
private:
    int len = 10;

    friend Square;
};

class Square
{
    Rect r;

public:
    void print()
    {
        cout << "HAHA" << r.len;
    }
};

int main()
{
    Square s;
    s.print();

    return 0;
}