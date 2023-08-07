#include<iostream>
using namespace std;

class shop
{
    int code;
    float price;
    public:
    void setData(int a, int b)
    {
        code=a;
        price=b;

    }
    void getData()
    {
        cout<<"Code of the item is : "<<code<<endl;
        cout<<"Price of the item is : "<<price<<endl;
    }

};

int main ()
{
    shop *p = new shop[3];
    shop *ptr=p;    // New pointer declared equal to the main pointer.
    int x,y;
    for (int i=0;i<3;i++)
    {
        cout<<"Enter the code of the item: "<<endl;
        cin>>x;
        cout<<"Enter the price of the item: "<<endl;
        cin>>y;
        p->setData(x,y);
        p++;
    }

    for (int i=0;i<3;i++)
    {
        ptr->getData();
        ptr++;

    }
    return 0;
}