#include <iostream>
using namespace std;
// EJERCICIO DE PARCIAL 
// por ejemplo ingresaba 10, imprimiera 10,8,6,4,2

int Paridad (int n);


int main () {
    int N;
    cin >> N;
    Paridad(N);
}

int Paridad (int n){
    
    if (n == 0) {
        cout << 0; // Condicion de paro
        return 0;
    }

    if ( n % 2 == 0)
    {
        cout << n << " ";
        n--; // Pasos 
    } else {
        n--; // Pasos
    }

    return Paridad (n); // Llamada recursiva

}