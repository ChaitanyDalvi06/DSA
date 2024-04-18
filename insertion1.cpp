// add number from index 0
#include <iostream>
#include <algorithm> 
using namespace std;

void insert()
{
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;
    int numbers[num];
    cout << "Enter " << num << " numbers:" << endl;

    // for loop to enter the numbers in array
    for (int i = 0; i < num; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // for loop to shift the number 
    for (int j = num; j >= 0; j--)
    {
        numbers[j + 1] = numbers[j];
    }
    // at index 0 number 15 will insert
    numbers[0] = 15;

    //to print the array
    for (int k = 0; k <= num; k++)
    {
        cout << numbers[k] << " ";
    }
}

int main()
{
    insert();
    return 0;
}
