#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the index of the element to delete
    int index = 2;

    // Iterate over the array, starting at the index of the element to delete
    for (int i = index; i < n - 1; i++)
    {
        // Copy the element to the next element in the array
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    n--;

    // Print the modified array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}