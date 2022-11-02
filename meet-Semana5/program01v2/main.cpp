#include <iostream>
#include <queue>

using namespace std;

struct car
{
    string color;
    double price;
    string licensePlate;
};
typedef struct car Car;

void showQueue(queue<Car> q);
void MostExpensiveCars(queue<Car> q);

int main()
{
    queue<Car> workshop;

    Car car1 = {"Azul", 14000, "P99801D22"};
    Car car2 = {"Verde", 6000, "P145FF1A0"};
    Car car3 = {"Rojo", 3598.98, "P12D134A0"};

    workshop.push(car1);
    workshop.push(car2);
    workshop.push(car3);
    cout << "Nuevos carros en el taller!\n";

    showQueue(workshop);

    cout << "Un nuevo carro en el taller!\n";
    Car car4 = {"Blanco", 13428.57, "P1HW1G4A0"};
    workshop.push(car4);

    showQueue(workshop);

    MostExpensiveCars(workshop);

    cout << "Un carro ha sido despachado del taller!\n";
    workshop.pop();
    MostExpensiveCars(workshop);
    showQueue(workshop);
}

void showQueue(queue<Car> q)
{
    queue<Car> p_Queue = q;
    Car p_Car;

    cout << "------- INICIO --------\n";
    while (!p_Queue.empty())
    {
        p_Car = p_Queue.front();
        cout << "\tColor: " << p_Car.color << "\n";
        cout << "\tPlaca: " << p_Car.licensePlate << "\n";
        cout << "\tPrecio: " << p_Car.price << "\n";
        cout << "------------------------------\n";
        p_Queue.pop();
    }
    cout << "------- FINAL ---------\n";
}

void MostExpensiveCars(queue<Car> q)
{
    queue<Car> p_Queue = q;
    Car p_Car;
    int x = 0, n;

    cout << "Ingrese el precio a comparar: ";
    cin >> n;

    while (!p_Queue.empty())
    {
        p_Car = p_Queue.front();

        if (p_Car.price > n)
            x++;

        p_Queue.pop();
    }

    cout << "\nHay "<< x <<" carros con un precio mayor a $" << n << "\n";

}