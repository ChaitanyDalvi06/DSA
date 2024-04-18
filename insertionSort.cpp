#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<< i+1 <<" elements : ";
        cin >> arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
