// Function Overloading : Using a function repeatedly in a class (with and without a parameter).
// Function Overriding : Using a same function in 2 classes.

#include <iostream>
using namespace std;

class parent
{
public:
    virtual void show() // virtual will help to run the child function.
  {
    cout << "This is parent." << endl;
  }
};

class child : public parent
{
public:
  void show() // show() function is same on both classes. This is function overriding.
  {
    cout << "This is child." << endl;
  }
};

int main()
{
  parent *p = new child();
  
  p->show();



  return 0;
}
