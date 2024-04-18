#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<< i+1 <<" elements : ";
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }

    cout << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
