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

    n1->next = n3; 
    delete n2;

    node *runptr = start;
    while (runptr != NULL)
    {
        cout << runptr->data << " ";
        runptr = runptr->next;
    }

    return 0;
}
