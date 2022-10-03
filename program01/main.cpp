#include <iostream>

using namespace std;

    // Structs
    struct car
    {
        string color;
        double precio;
        string licensePlate;
    }; 
    typedef struct car Car;

    struct node
    {
        car element;
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
    void Enqueue(queue *q, car element);
    void Dequeue(queue *q);
    car Front(queue *q);
    car Rear(queue *q);
    bool IsEmpty(queue *q);

    // Variables
    const car invalidCar = {"",0,""};
    
    int main()
    {
        
        Queue workshopQueue = NewQueue();

        IsEmpty(&workshopQueue) ? cout << "Empty!\n" : cout << "There are some cars to fix!\n";
        
        Car car1 = {"Azul",14000,"P99801D22"};
        Car car2 = {"Verde",6000,"P145FF1A0"};
        Car car3 = {"Rojo",3598.98,"P12D134A0"};
        Enqueue(&workshopQueue,car1);
        Enqueue(&workshopQueue,car2);
        Enqueue(&workshopQueue,car3);
        
        IsEmpty(&workshopQueue) ? cout << "Empty!\n" : cout << "There are some cars to fix!\n";

        while (!IsEmpty(&workshopQueue))
        {
            cout << Front(&workshopQueue).color << "\t" << Front(&workshopQueue).licensePlate << "\n";
            Dequeue(&workshopQueue);
        }

        IsEmpty(&workshopQueue) ? cout << "Empty!\n" : cout << "There are some cars to fix!\n";

        return 0;
    }

    queue NewQueue()
    {
        Queue p_queue;

        p_queue.front = NULL;
        p_queue.rear = NULL;

        return p_queue;
    }

    void Enqueue(queue *q, car element)
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

    car Front(queue *q)
    {
        return (q->front)->element;
    }

    car Rear(queue *q)
    {
        return (q->rear)->element;
    }

    bool IsEmpty(queue *q)
    {
        return (q->front == NULL);
    }