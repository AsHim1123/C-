#include <iostream>
using namespace std;

class basicHelicopter
{
public:
    void fly()
    {
        cout << "Baisc fly." << endl;
    }
    void land()
    {
        cout << "Basic land." << endl;
    }
};

class advanceHelicopter : public basicHelicopter
{
public:
    void runAC()
    {
        cout << "Advance AC." << endl;
    }
};

int main()
{
    basicHelicopter *p; // basicHelicopter *p = new advanceHelicopter();
    p = new advanceHelicopter();

    return 0;
}