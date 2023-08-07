#include <iostream>
using namespace std;

void func(int x)
{
    cout << "This is func1() " << x << endl;
}
template <class t>
void func(t x)
{
    cout << "This is func2() " << x << endl;
}
int main()
{

    func(5);      // In this case the function without template will be invoked(exact match is given priority in this case).
    func<int>(5); // In this case the function with template will be invoked.
    return 0;
}