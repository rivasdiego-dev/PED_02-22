#include <iostream>
#include <string>
using namespace std;

// Registros a almacenar: cliente
struct carro {
    double price;
    string color;
    string licensePlate;
};
typedef struct carro Carro;

/* Utilizaremos el identificador T 
Para referirnos el carro
Si cambiaramos de struct no habria 
que reemplazarlo en todas las funciones
Solo cambiar el tipo de dato que es T */

typedef carro T;
const T noValido = {-1, "", ""};

// Estructuras de nodo y cola
struct Nodo{
    T elemento;
    struct Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

// Interfaz de funciones a implementar
void initialize(Cola *q);
bool empty(Cola *q);
T front(Cola *q);
T back(Cola *q);
void enqueue(Cola *q, T x);
T dequeue(Cola *q);
int size(Cola *q);
