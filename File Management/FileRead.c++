#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream a("AsHim.txt");

    if (!a)
        cout << "No File Found." << endl;

    string name;
    int number;

    a >> name; // getline(a, name); -> Reads a single line from a file.
    a >> number;

    cout << "Name : " << name << "Number : " << number;

    a.close();

    return 0;
}