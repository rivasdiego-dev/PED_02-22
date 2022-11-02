#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct package
{
    int id;         // (Número del 1 al 100 generado aleatoriamente)
    bool fragile;   //Es frágil (Sí/ No)
    double weight;  //Peso en Kg
    char size;    //Tamaño del paquete ( Pequeño / Mediano / Grande )

};
typedef struct package Package;

package NewPackage ();

int main () {

    //TODO Implementar menu de opciones y logica de programa
    
    return 0;
}

package NewPackage ()
{
    Package some_Package;
    int fragile_option;
    double weight;
    char size;
    
    some_Package.id = (rand() % 100 + 1);
    
    cout << "ID del paquete:\t" << some_Package.id<< "\n";
    cout << "El paquete es fragil? Si(1) No(0):\t";
    cin >> fragile_option;
    fragile_option == 1 ?  some_Package.fragile = true : some_Package.fragile = false;

    cout << "Peso del paquete (Kg):\t";
    cin >> weight;
    some_Package.weight = weight;
    
    cout << "Tamano del paquete ( (S)mall / (M)edium  / (L)arge ):\t";
    cin >> size;
    some_Package.size = size;

    return some_Package;
}