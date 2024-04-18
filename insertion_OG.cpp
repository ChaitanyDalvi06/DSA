#include <iostream>
using namespace std;
int main()
{
    int size; // user input array ka size
    cout << "Enter the size of array : ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> array[i];
    }

    int index, value;
    cout << "Enter the index where you want to insert element :";
    cin >> index;
    cout << "Enter the value : ";
    cin >> value;

    for (int i = size; i > index; i--)
    {
        array[i] = array[i - 1];
    }

    array[index] = value;

    for (int k = 0; k <= size; k++)
    {
        cout << k << " " << array[k] << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[6];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter " << i + 1 << " element: ";
//         cin >> array[i+1];
//     }
//     array[0] = 100;;

//     for (int k = 0; k < 6; k++)
//     {
//         cout << array[k] << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int size, index, data;
    cout << "enter the size of array : ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter " << i + 1 << " elements : ";
        cin >> array[i];
    }
    cout << "Enter the index number where you want to insert : ";
    cin >> index;
    cout << "enter the data : ";
    cin >> data;
    for (int i = size; i > index; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = data;

    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}
