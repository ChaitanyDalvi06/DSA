#include <iostream>
using namespace std;
int main()
{
    void *ptr;
    int a = 5;
    ptr = &a;
    cout << a;
    cout << *(int *)ptr << endl;

    return 0;
}
