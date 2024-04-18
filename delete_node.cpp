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
    n1->data = 01;
    n1->next = n2;
    n2->data = 02;
    n2->next = n3;
    n3->data = 03;
    n3->next = NULL;

    node *ptr;
    ptr = start;

    cout << "Before deletion : ";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    n1->next = n3;
    free(n2);

    cout << endl;
    cout << "After deletion : ";
    node *runptr = start;        
    while (runptr != NULL)
    {
        cout << runptr->data << " ";
        runptr = runptr->next;
    }

    

    return 0;
}
