/******************************************************************************

Cree un programa que lleve el control de una fila para comprar donas en un restaurante.
Debe ser realizado haciendo uso de una Cola o QUEUE, la estructura de los usuarios
debera contener: nombre y numero de donas a comprar

El programa debera de poder realizar las siguientes funciones:
1. Agregar Carros a la cola
2. Consultar los Carros de la fila
3. Despachar Carros (mostrando cuanto deben pagar por sus donas)
4. Consultar tamaño de la fila
5. Consultar Carros del incio y del final de la fila
6. Salir

*******************************************************************************/
#include <iostream>
#include <string>
// Incluimos nuestra libreria de colas
#include ".\queue.cpp"
using namespace std;

// Declarar cola a utilizar
Cola cola_Carros;

// Funciones que contienen la logica del negocio
void agregarCarro();
void mostrarCarro(T Carro);
void consultarCola(Cola *q);
void despacharCarro(Cola *q);
void mostrarTamanoCola(Cola *q);
void consularInicioyFinal(Cola *q);
void mostrarMensajeColaVacia();
void cuantosCarrosPrecioAlto(Cola *q);

int main()
{
    initialize(&cola_Carros);

    bool continuar = true;
    do
    {
        int opcion = 0;
        cout << "\n1) Agregar un nuevo carro a la fila\n";
        cout << "2) Consultar carros de la fila\n";
        cout << "3) Despachar carro\n";
        cout << "4) Consultar tamano de la fila\n";
        cout << "5) Consultar incio y final de la fila\n";
        cout << "6) Consultar carros con precio elevado\n";
        cout << "7) Salir\n";
        cout << "Opcion elegida: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            agregarCarro();
            break;
        case 2:
            consultarCola(&cola_Carros);
            break;
        case 3:
            despacharCarro(&cola_Carros);
            break;
        case 4:
            mostrarTamanoCola(&cola_Carros);
            break;
        case 5:
            consularInicioyFinal(&cola_Carros);
            break;
        case 6:
            cuantosCarrosPrecioAlto(&cola_Carros);
            break;
        case 7:
            continuar = false;
            break;
        default:
            cout << "Opcion invalida!\n";
            break;
        }
    } while (continuar);

    return 0;
}

// Implementacion funciones que contienen la logica del negocio

void agregarCarro()
{
    // Creamos un nuevo Carro para completar su informacion
    T nuevo_Carro;

    cout << "--------------------------------\n";
    cout << "--- Agregando nuevo Carro a la fila ---\n";
    cout << "Ingrese el color del carro:\n";
    getline(cin, nuevo_Carro.color);
    cout << "Ingrese la placa del carro:\n";
    getline(cin, nuevo_Carro.licensePlate);
    cout << "Ingrese el precio del carro:\n";
    cin >> nuevo_Carro.price;
    cin.ignore();

    // Agregamos el nuevo Carro a la cola de Carros
    enqueue(&cola_Carros, nuevo_Carro);
}

void mostrarCarro(T Carro)
{
    cout << "Placa: " << Carro.licensePlate << "\n";
    cout << "Color: " << Carro.color << "\n";
}

void consultarCola(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    Nodo *unNodo = q->frente;
    cout << "----------- INICIO -------------\n";
    cout << "--------------------------------\n";
    mostrarCarro(unNodo->elemento);

    while (unNodo->siguiente != NULL)
    {
        unNodo = unNodo->siguiente;
        cout << "--------------------------------\n";
        mostrarCarro(unNodo->elemento);
    }
    cout << "------------ FINAL -------------\n";
}

void mostrarTamanoCola(Cola *q)
{
    int tamano = size(q);
    cout << "\nNumero de Carros: " << tamano << "\n";
}

void consularInicioyFinal(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    // Traer el Carro del frente de la cola
    T CarroFrente = front(q);
    cout << "----------- INICIO -------------\n";
    mostrarCarro(CarroFrente);

    // Traer el Carro del final de la cola
    T CarroFinal = back(q);
    cout << "------------ FINAL -------------\n";
    mostrarCarro(CarroFinal);
}

void despacharCarro(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    // Traer el Carro del frente de la cola
    // Y al mismo tiempo eliminarlo
    T Carro = dequeue(q);
    cout << "------- DESPACHANDO Carro -------\n";
    mostrarCarro(Carro);
}

void mostrarMensajeColaVacia()
{
    cout << "--------------------------------\n";
    cout << "Cola vacia!\n";
    cout << "--------------------------------\n";
}


void cuantosCarrosPrecioAlto(Cola *q)
{
    int n = 0, contador = 0;
    cout << "--------------------------------\n";
    cout << "Ingrese el valor a comparar: ";
    cin >> n;
    cout << "--------------------------------\n";

    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    Nodo *unNodo = q->frente;

    if ((unNodo->elemento).price > n)
    {
        contador++;
    }
    while (unNodo->siguiente != NULL)
    {
        unNodo = unNodo->siguiente;
        if ((unNodo->elemento).price > n)
        {
            contador++;
        }
    }

    cout << "Numero de carros que valen mas de " << n << ": " << contador << '\n';
    cout << "--------------------------------\n";
    cout << "Lista de carros:\n";

    unNodo = q->frente;
    
    if ((unNodo->elemento).price > n)
    {
       mostrarCarro(unNodo->elemento);
    }

    while (unNodo->siguiente != NULL)
    {
        unNodo = unNodo->siguiente;
        if ((unNodo->elemento).price > n)
        {
            mostrarCarro(unNodo->elemento);
        }
    }
    cout << "--------------------------------\n";
}
