#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Ashim"] = 90;
    marksMap["Jack"] = 78;
    marksMap["Ram"] = 80;

    marksMap.insert({{"Sita", 98}, {"Hari", 77}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout << "The size is : " << marksMap.size() << endl;
    cout << "The max size is : " << marksMap.max_size() << endl;
    cout << "The empty's return value is : " << marksMap.empty() << endl;

    return 0;
}
