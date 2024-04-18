#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value of N :-  ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Elements :- ";
        cin >> arr[i];
    }
    int largest = 0;
    int sec_largest = 0;

    for (int j = 1; j < n; j++)
    {
        if (largest < arr[j])
        {
            sec_largest = largest;
            largest = arr[j];
        }
        else if (arr[j] > sec_largest)
        {
            sec_largest = arr[j];
        }
    }
    cout << "Larget Element : " << largest << endl;
    cout << "second Larget Element : " << sec_largest << endl;
    return 0;
}