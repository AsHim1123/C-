#include<iostream>
using namespace std;

class person 
{
    public:
    int id;
    string name;
    double height;

    void getName()
{
    cout<<"The name is :"<<name;
}
};

int main ()
{
    person p;
    p.id = 1;
    p.name = "Ashim";
    p.height = 1.9;
    p.getName();

    return 0;
}