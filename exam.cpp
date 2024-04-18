#include <iostream>
using namespace std;

struct Marks
{
    int rollno;
    string name;
    int Cpp;
    int python;
    int maths;
    int scratch;
    int soft_skills;

    void getinfo()
    {
        cout << "Enter Name:";
        cin >> name;
        cout << "Enter Roll No.:";
        cin >> rollno;
    }

    void displayinfo()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No:" << rollno << endl;
    }
};

int main()
{
    int number;
    cout << "For enrollment enter 1 <--------> For Marks Entry enter 2: ";
    cin >> number;

    if (number == 1)
    {
        cout << "1.Regular or 2.Re-exam : ";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            Marks m;
            m.getinfo();
            cout << endl
                 << endl;
            cout << "Enrolled For the Exam" << endl;
            m.displayinfo();
        }
        else if (choice == 2)
        {
        }
        else
        {
        }
    }
    else if (number == 2)
    {
        cout << "1.Regular or 2.Re-exam";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
        }
        else if (choice == 2)
        {
        }
        else
        {
            cout << "Invalid Choice";
        }
    }
}