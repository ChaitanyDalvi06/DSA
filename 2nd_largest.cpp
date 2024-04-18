// Write a CPP program to find second largest of n numbers using an array.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Enter "<<i+1<< " element : ";
        cin>>arr[i];
    }
    int largest = 0;
    int second_largest = 0;
    for (int j = 0; j < size; j++)
    {
       if (largest < arr[j])
        {
            second_largest = largest;
            largest = arr[j];
        }
        else if (arr[j] > second_largest)
        {
            second_largest = arr[j];
        } 
    }
    cout <<"Second Largest number in the array is : "<< second_largest << endl;
return 0;
}
