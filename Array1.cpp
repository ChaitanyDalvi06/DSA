#include <iostream>
using namespace std;
int main()
{
    // int arr[5]={11,22,33,44,55};
    // cout<<arr[1]<<endl;
    // cout<<3[arr]<<endl;

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n];

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }
   
    int mean = sum / n;
    cout << "Mean of the given numbers are : " << mean << endl;

    return 0;
}
