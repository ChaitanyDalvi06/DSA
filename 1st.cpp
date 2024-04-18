#include <iostream>
using namespace std;

void findUniqueElement()
{
    int size;
    cout << "Enter the number of size of array : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " elements : ";
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] != array[i + 1])
        {
            cout << endl;
            cout << array[i] << " is less repeated " << endl;
            break;
        }
    }
}
int main()
{

    findUniqueElement();
    return 0;
}

