#include <iostream>
using namespace std;

class country
{
private:
    int countryId;
    string countryName;

    country()
    {
        countryId = 977;
        countryName = "Nepal";
    }
    friend void printCountry(); // Have access to private member.
};

void printCountry()
{
    country c; // Object should be created inside the function.
    cout << "Id : " << c.countryId << "Name = " << c.countryName << endl;
}

int main()
{
    printCountry();

    return 0;
}