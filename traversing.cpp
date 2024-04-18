#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
int main()
{
    node *start;
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();

    start = n1;
    n1->data = 33;
    n1->next = n2;
    n2->data = 48;
    n2->next = n3;
    n3->data = 51;
    n3->next = NULL;

    node *ptr;
    ptr = start;

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}
