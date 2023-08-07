#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int size;
    int element;
    cout << "Enter the size of the vector." << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements to be added in the vector: " << endl;
        cin >> element;
        vec1.push_back(element); // For adding elements in the vector.
    }
    // vec1.pop_back();  // For removing the last element of the vector.

    display(vec1);
    vector<int>::iterator iter = vec1.begin();

    vec1.insert(iter, 566); // Inserting elements.

    // vec1.insert(iter+1, 566);

    // vec1.insert(iter,5, 566); // Copy 566 5 times.

    display(vec1);

    vector<int> vec2(4, 12); // 4 element vector of 12.
    display(vec2);
    cout << vec2.size();

    return 0;
}