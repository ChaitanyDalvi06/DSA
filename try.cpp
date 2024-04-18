#include <iostream>

// Node class representing each element in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList {
public:
    Node* head;

    // Constructor
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to display the elements of the linked list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Creating a linked list
    LinkedList myList;

    // Appending elements to the linked list
    myList.append(1);
    myList.append(2);
    myList.append(3);

    // Displaying the linked list
    std::cout << "Linked List: ";
    myList.display();

    return 0;
}
