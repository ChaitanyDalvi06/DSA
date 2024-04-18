#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Insert at end
void insertatend(node &head, int value)
{
    node *n = new node(value);

    if (head.next == NULL)
    {
        head.next = n;
        return;
    }

    node *temp = &head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Display nodes
void displayNode(node *head)
{
    node *temp = head->next;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int numNodes;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    node *head = new node(-1);

    for (int i = 0; i < numNodes; ++i)
    {
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insertatend(*head, value);
    }

    displayNode(head);
    // insertatend();

    // Free memory
    node *temp = head;
    while (temp != NULL)
    {
        node *prev = temp;
        temp = temp->next;
        delete prev;
    }

    return 0;
}
