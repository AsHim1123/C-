#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream a("name.txt");
    string name;
    cout << "Enter your name : " << endl;
    cin >> name;

    a << "My name is " + name;
    a.close();

    ifstream as("name.txt");
    string content;
    getline(as, content);
    // as>>content;
    cout << "The content of the file is : " << content;

    as.close();
}
