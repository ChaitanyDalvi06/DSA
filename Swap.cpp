#include <iostream>
using namespace std;

void func()
{
    int num;
    int smallindex=0,largeindex=0;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];
    cout << "Enter " << num << " numbers" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> arr[i];
    }

    int smallest = arr[0];
    for (int j = 1; j < num; j++)
    {
        if (arr[j] < smallest)
        {
            smallest = arr[j];
            smallindex=j;
        }
    }

    int bigger = arr[0];
    for (int k = 1; k < num; k++)
    {
        if (arr[k] > bigger)
        {
            bigger = arr[k];
            largeindex=k;

        }
    }

    cout << "The smaller number is : " << smallest << endl;
    cout << "The bigger number is  : " << bigger << endl;

    int temp=arr[smallindex];
    arr[smallindex]=arr[largeindex];
    arr[largeindex]=temp;

    cout<<"After swapping : ";
    for(int i=0 ; i<num ; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    func();
    return 0;
}
