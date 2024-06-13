#include <iostream>
using namespace std;

class num
{

public:
    num()
    {
        static int count = 0;
        cout << "This is the time when constructor is called for the object."<<count << endl;
        count++;
    }
    ~num() // Destructor
    {
        static int count=0;
        cout << "This is the time when destructor is called for the object."<<count << endl;
        count--;
    }
};

int main()
{
    cout << "Entering the main function." << endl;
    cout << "Creating a object n1." << endl;
    num n1;  
    {
        cout << "Entering the block." << endl;
        cout << "Creating two more objects n2 and n3." << endl;
        num n2;
        num n3;
        cout << "Exiting the block." << endl;
    }
    cout << "Back to main function." << endl;

    return 0;
}