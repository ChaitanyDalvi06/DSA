// add number in middle
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
    int n;
    cout<<"Enter the index number :";
    cin>>n;
    cout<<"Enter the value:";
    cin>>numbers[n-1];

    //to print the array
    for (int k = 0; k < num; k++)
    {
        cout << numbers[k] << " ";
    }
}

int main()
{
    insert();
    return 0;
  
}
