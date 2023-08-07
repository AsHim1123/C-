// Polymorphism : Here we use start and stop function for operating different bikes.

#include <iostream>
using namespace std;

class bike  // Abstract Base Class : Includes pure virtual function.
{
public:
    virtual void start() = 0; // Pure Virtual Function
    virtual void stop() = 0; 
};
class VrBike : public bike
{
public:
    void start()
    {
        cout << "Vr Bike starts." << endl;
    }
    void stop()
    {
        cout << "Vr Bike stops." << endl;
    }
};
class HeroBike : public bike
{
public:
    void start()
    {
        cout << "Hero Bike starts." << endl;
    }
    void stop()
    {
        cout << "Hero Bike stops." << endl;
    }
};
int main()
{
    bike *b = new VrBike();

    b->start();
    b->stop();

    return 0;
}