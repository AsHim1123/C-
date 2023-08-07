#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream a("AsHim.txt", ios::app); // ios::app (append) -> It will add the new content to the previous ones.
    a << "AsHim " << endl;             // ios::trunc (truncate) -> It will delete the previous content and replace it by new one.
    a << 9826261277 << endl;

    a.close();

    return 0;
}