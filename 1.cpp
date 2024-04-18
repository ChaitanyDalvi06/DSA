#include <iostream>

// A structure to represent a node in the linked list
struct Node {
    int data; // The value stored in the node
    Node* next; // The next node in the list
};

// A function to insert a new node at the beginning of the list
Node* insertBeginning(Node* head, int data) {
    // If the list is empty, return a new node with the given data
    if (head == NULL) {
        Node* newNode = new Node();
        newNode->data = data;
        return newNode;
    }

    // Otherwise, create a new node with the given data and link it to the head of the list
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

int main() {
    // Create an empty linked list
    Node* head = NULL;

    // Insert three nodes at the beginning of the list
    head = insertBeginning(head, 1);
    head = insertBeginning(head, 2);
    head = insertBeginning(head, 3);

    // Print the linked list to demonstrate that it has been 

    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
