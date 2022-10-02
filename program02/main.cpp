#include <iostream>

using namespace std;

    // Structs
    struct client
    {
        string name;
        double bill;
    }; 
    typedef struct client Client;

    struct node
    {
        client element;
        node *next;
    }; 
    typedef struct node Node;
    
    struct queue
    {
        node *front;
        node *rear;
    }; 
    typedef struct queue Queue;

    // Funciones (Declaración)
    queue NewQueue();
    void Enqueue(queue *q, client data);
    void Dequeue(queue *q);
    client Front(queue *q);
    client Rear(queue *q);
    bool IsEmpty(queue *q);
    
    int main()
    {
        
        // TODO Code for group 22
        
        return 0;
    }