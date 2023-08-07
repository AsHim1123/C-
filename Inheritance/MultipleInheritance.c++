#include <iostream>
using namespace std;

class academicAct
{
protected:
    int academicTotal;

public:
    void getAcademicTotal()
    {
        cout << "Enter the academic total marks: " << endl;
        cin >> academicTotal;
    }
    void displayacademicTotal()
    {
        cout << "Academic total marks: " << academicTotal << endl;
    }
};

class extraAct
{
protected:
    int disciplineMarks;
    int sportMarks;

public:
    void extraMark()
    {
        cout << "Enter the discipline and sport total marks: " << endl;
        cin >> disciplineMarks >> sportMarks;
    }

    void displayExtraMark()
    {
        cout << "Extra discipline marks: " << disciplineMarks << endl;
        cout << "Extra sport marks: " << sportMarks << endl;
    }
};

class result : public academicAct, public extraAct
{
private:
    int total;

public:
    void calculateTotal()
    {
        total = academicTotal + disciplineMarks + sportMarks;
    }
    void displayTotal()
    {
        cout << "Total is : " << total << endl;
    }
};

int main()
{
    result r;
    r.getAcademicTotal();
    r.extraMark();
    r.calculateTotal();

    r.displayacademicTotal();
    r.displayExtraMark();
    r.displayTotal();

    return 0;
}