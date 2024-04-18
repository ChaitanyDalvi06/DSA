#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> array[i];
    }

    int index, value;
    cout << "Enter the index where you want to insert element :";
    cin >> index;
    cout << "Enter the value : ";
    cin >> value;

    for (int i = size; i > index; i--)
    {
        array[i] = array[i - 1];
    }

    array[index] = value;

    for (int k = 0; k <= size; k++)
    {
        cout << k << " " << array[k] << endl;
    }
    return 0;
}

