#include <iostream>
using namespace std;
void printArray(int a[]);
int main()
{

    int a[] = {1, 2, 3, 4, 6, 7};
    printArray(a);

    return 0;
}
void printArray(int a[])
{
    int i;
    int len = 6; // int len = sizeof(a);
    for (i = 0; i < len; i++)
    {
        cout << a[i] << endl;
    }
}