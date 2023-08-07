#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream a("sample.txt");
    a << "My name is AsHim." << endl;
    a << "I am Newar.";
    a.close();

    ifstream as("sample.txt");
    string content;

    while (as.eof() == 0)
    {
        getline(as, content);
        cout << content << endl;
    }

    as.close();

    return 0;
}