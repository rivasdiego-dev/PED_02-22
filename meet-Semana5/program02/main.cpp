#include <iostream>

using namespace std;

    // Structs
    struct client
    {
        string name;
        int DUI;
        double bill;
    }; 
    typedef struct client Client;

    struct node
    {
        client element;
        node *next;
    }; 
    typedef struct node *Node;
    
    struct queue
    {
        node *front;
        node *rear;
    }; 
    typedef struct queue Queue;

    // Funciones (Declaración)
    queue NewQueue();
    void Enqueue(queue *q, client element);
    void Dequeue(queue *q);
    client Front(queue *q);
    client Rear(queue *q);
    bool IsEmpty(queue *q);
    
    // Variables
    const client invalidClient = {"",0,0};
    
    int main()
    {
        
        Queue waterServiceQueue = NewQueue();

        IsEmpty(&waterServiceQueue) ? cout << "Empty!\n" : cout << "There are some clients who are gonna pay!\n";
        
        client client1 = {"Hector",10246380,16.25};
        client client2 = {"Laura",84362154,12.5};
        client client3 = {"Ramon",99512408,24.12};

        Enqueue(&waterServiceQueue,client1);
        Enqueue(&waterServiceQueue,client2);
        Enqueue(&waterServiceQueue,client3);
        
        IsEmpty(&waterServiceQueue) ? cout << "Empty!\n" : cout << "There are some clients who are gonna pay!\n";

        while (!IsEmpty(&waterServiceQueue))
        {
            cout << Front(&waterServiceQueue).name << " has payed!" << "\n";
            Dequeue(&waterServiceQueue);
        }

        IsEmpty(&waterServiceQueue) ? cout << "Empty!\n" : cout << "There are some clients who are gonna pay!\n";

        return 0;
        
        return 0;
    }

    
    queue NewQueue()
    {
        Queue p_queue;

        p_queue.front = NULL;
        p_queue.rear = NULL;

        return p_queue;
    }

    void Enqueue(queue *q, client element)
    {
        Node p_Node = new node();
        p_Node->element = element;
        p_Node->next = NULL;
        
        if(IsEmpty(q))
        {
            q->front = p_Node;
            q->rear = p_Node;
        }
        else 
        {
            (q->rear)->next = p_Node;
            q->rear = p_Node;
        }
        cout << p_Node->element.name << " now is in the queue\n";
    }

    void Dequeue(queue *q)
    {
        if (IsEmpty(q))
        {
            cout << "Noting to dequeue...";
        }
        else
        {
            Node aux = q->front;
            q->front = aux->next;
        }
    }

    client Front(queue *q)
    {
        return (q->front)->element;
    }

    client Rear(queue *q)
    {
        return (q->rear)->element;
    }

    bool IsEmpty(queue *q)
    {
        return (q->front == NULL);
    }