//Write a CPP program to create a linear queue of 10 values and permits insertion at both the ends.

 #include <iostream>
 using namespace std;
 struct Queue 
 {
    int data; 
    int index; 
};

Queue* createQueue() 
{
    Queue* q = new Queue(); 
    q->data = 0; 
    q->index = -1; 
    return q;
}

 int main()
{
    createQueue();
    return 0;
}

class{
    int a;
    char b;
};
