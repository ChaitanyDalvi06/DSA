#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

//insert at end

void insertatend(node &head , int value) //refrence not by value
{
    node* n=new node(value);

    if(head.next==NULL)
    {
        head.next=n;
        return;

    }

    node* temp=&head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void displayNode (node* head) //by value not by refrence coz we are not changing it
{
    node* temp=head->next;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=new node(-1);
    insertatend(*head,1);
    insertatend(*head,2);
    insertatend(*head,3);

    displayNode(head);

    

    return 0;
}