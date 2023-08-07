#include <iostream>
using namespace std;

class AsHim
{
    int a;

public:
     void setData(int a) 
    {
        this->a = a;
    }
    void getData()
    {
        cout<<"Value of a is : "<<a<<endl;
    }
};
int main()
{
    AsHim A;
    A.setData(11);
    A.getData();

    return 0;
}