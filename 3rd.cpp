#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array :  ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " elements : ";
        cin >> arr[i];
    }

    int leader = 0;
    int second_leader = 0;
    for (int j = 0; j < size; j++)
    {
        if (leader < arr[j])
        {
            second_leader = leader;
            leader = arr[j];
        }
        else if (arr[j] > second_leader)
        {
            second_leader = arr[j];
        }
    }
    cout << "leader : " << leader << endl;
    cout << second_leader << endl;
    cout << arr[size - 1] << endl;
    return 0;

} 