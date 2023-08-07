#include<iostream>
using namespace std;

template<class T1, class T2>

float avg(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a;
    a = avg(2, 4.3);
    cout<<"The average of these numbers is : "<<a<<endl;

    return 0;
}