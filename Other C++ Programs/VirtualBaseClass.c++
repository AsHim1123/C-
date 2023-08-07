// Virtual base class prevents the copy of data in it's derived classes.
// If we don't use virtual base class then the roll number's data will be copied into both exam and sports and result class will
// get confused to pick the data. So making virtual base class helps to prevent ambiguity.



#include <iostream>
using namespace std;

class student
{
protected:
    int rollnumber;

public:
    void set_roll(int a)
    {
        rollnumber = a;
    }
    void print_roll()
    {
        cout << "Your roll number is : " << rollnumber << endl;
    }
};
class exam : virtual public student
{
protected:
    float physics, maths;

public:
    void set_marks(float marks1, float marks2)
    {
        physics = marks1;
        maths = marks2;
    }
    void print_marks()
    {
        cout << "Your marks in Physics is : " << physics << endl;
        cout << "Your marks in Maths is : " << maths << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(int a)
    {
        score = a;
    }
    void print_score()
    {
        cout << "Your sports score is : " << score << endl;
    }
};

class result : public exam, public sports
{
public:
    void display()
    {
        float total = physics + maths + score;
        print_roll();
        print_marks();
        print_score();
        cout << "The total is : " << total << endl;
    }
};

int main()
{
    result r;
    r.set_roll(11);
    r.set_marks(90, 98);
    r.set_score(100);

    r.display();

    return 0;
}