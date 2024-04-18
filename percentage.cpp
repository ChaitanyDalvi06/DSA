#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the number of students in the class:- " << endl;
    cin >> count;

    double pass_DSA = 0;
    double fail_DSA = 0;

    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the marks of " << i + 1 << "th student in DSA out of 100" << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[i] >= 40)
        {
            pass_DSA += 1;
        }
        else
        {
            fail_DSA += 1;
        }
    }

    cout << "Passed students count: " << pass_DSA << endl;
    cout << "Failed students count: " << fail_DSA << endl;
    double percentage = (pass_DSA * 100.0) / count;
    cout << "Percentage of students passed is " << percentage << "%" << endl;

    return 0;
}
