#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n = new node;
}