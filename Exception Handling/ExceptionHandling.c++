#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 1st number: " << endl;
    cin >> a;

    cout << "Enter 2nd number: " << endl;
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw(b);
        }
        int result = a + b;
        cout << result;
    }
    catch (int i)
    {
        cout << "Cannot divide by zero.";
    }

    return 0;
}