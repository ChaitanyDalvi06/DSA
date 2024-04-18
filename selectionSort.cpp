#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Selection sort
    for (int i = 0; i < n - 1; ++i)
    {
        int small = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        // Swap the minimum element with the first element of unsorted array
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
