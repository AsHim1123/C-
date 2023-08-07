#include <iostream>
using namespace std;

template <class T> // By using this we can transfer data type as a variable
                   // and define it at the end.

class product
{
    T a;
    T b;

public:
    void setData(T x, T y)
    {
        a = x;
        b = y;
    }
    void getProduct()
    {
        T c = a * b;
        cout << "The product of a and b is : " << c << endl;
    }
};

int main()
{
    product<int> obj1; // Here the data can be defined according to our need.
    obj1.setData(3, 4);
    obj1.getProduct();

    product<float> obj2; // Here the data can be defined according to our need.
    obj2.setData(2.3, 3.4);
    obj2.getProduct();

    return 0;
}