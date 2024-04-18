#include <iostream>
using namespace std;

void teacher(float arr1[5][10])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nsubject " << i + 1;
        int couf = 0;
        int coup = 0;
        int max = 0;

        for (int j = 0; j < 10; j++)
        {
            if (arr1[i][max] <= arr1[i][j])
            {
                // saving index of toppper
                max = j;
            }
            if (arr1[i][j] < 40)
            {
                // counting passed students number
                couf++;
            }
            else
            {
                // counting failed students number
                coup++;
            }
        }
        cout << "\nfailed percentage " << couf * 100 / 10 << "%";
        cout << "\npassing percentage " << coup * 100 / 10 << "%\n";
        cout << "\nSUBJECT TOPPER IS student " << max + 1 << " got : " << arr1[i][max] << " marks \n";
    }
}

void student(float arr2[5][10])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "\n";
        int top = 0;
        float sum = 0.0;
        for (int j = 0; j < 5; j++)
        {
            cout << "Marks in subject " << j + 1 << " : " << arr2[j][i] << " \n";
            sum += arr2[j][i];
            if (arr2[top][i] <= arr2[j][i])
            {
                top = j;
            }
        }
        cout << "\nTotal Marks obtained = " << sum << " out of " << 5 * 100 << " ";
        cout << "\nPercentage Marks = " << sum * 100 / 500 << "% \n";
        cout << "Top performed in subject " << top << " Top marks is " << arr2[top][i];
    }
}

int main()
{
    float result[5][10];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nsubject " << i + 1;
        for (int j = 0; j < 10; j++)
        {
            cout << "\nenter the mark of student " << j + 1 << " in subject " << i + 1 << " : ";
            cin >> result[i][j];
        }
    }

    while (true)
    {
    again:
        char choice;
        cout << "TEACHER (t) / STUDENT (s) ";
        cin >> choice;
        if (toupper(choice) == 'T')
        {
            teacher(result);
        }
        else if (toupper(choice) == 'S')
        {
            student(result);
        }
        else
        {
            cout << "\nINVALID INPUT!!...";
            goto again;
        }
    }
    return 0;
}
