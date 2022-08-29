#include <iostream>
#include <cmath>

using namespace std;

int Summation (int i, int n, int x, int total); // Declaracion de la funcion

/*
  En este programa vamos a utilizar 4 variables para la función
  sumatoria recursiva.
    i -> El contador que empieza en 0 y llegara hasta n
    n -> Límite de la suma
    x -> Numero base al que vamos a potenciar a i
    total -> Variable de almacenamiento para la sumatoria 

*/

int main() {
  int i = 0, total = 0, x,n; // Definicion y declaracion de variables 

  cout << "Ingresar el valor de 'N' -> "; cin >> n; //Pedimos al usuario ingresar n

  cout << "\nIngresar el valor de 'X' -> "; cin >> x; //Pedimos al usuario ingresar x

  cout << "\nValor total de la sumatoria: " << Summation(i,n,x,total); // Implementamos la funcion
  
  return 0;
}

int Summation (int i, int n, int x, int total) {
  
  if (i > n) // Caso base de la funcion
  {
    return total;
  }
  // Si no se cumple, se procede al caso recursivo
  total += pow(x,i); // Donde elevamos x al valor actual de i
  i++; // Y aumentamos dicho valor por uno

  return Summation(i,n,x,total); // Para pasarlos a la instancia recursiva de la funcion

}