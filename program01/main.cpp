#include <iostream>

using namespace std;

    // Structs
    struct car
    {
        string color;
        string model;
        string licensePlate;
    }; 
    typedef struct car Car;

    struct node
    {
        car element;
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
    void Enqueue(queue *q, car data);
    void Dequeue(queue *q);
    car Front(queue *q);
    car Rear(queue *q);
    bool IsEmpty(queue *q);
    
    int main()
    {
        
        // TODO Code for group 21
        
        return 0;
    }