#include <iostream>

using namespace std;

void PrintTables (int x, int i); // Declaramos la funcion 

/*
  Esta función será de tipo void, porque no necesitamos que devuelva
  un valor en específico cuando sea utilizada.

  Utiliza los parametros de "x" (Numero del que queremos saber las tablas),
  y "i" (contador);
*/

int main() {
  int i = 10; //Asignamos el valor hasta donde queremos la tabla
  PrintTables(7,i); // Llamamos a la funcion, en este caso la tabla del 7
  return 0;
}

void PrintTables (int x, int i)
{
  if (i == 0) // Si el contador ha llegado a 0
  {
    cout << x << " * 0 = 0"; // Sabemos que cualquier numero multiplicado
    //                          por cero, es cero
    return;
  }
  // Si no es cero, hacemos la impresion correspondiente
  cout << x << " * " << i << " = " << x*i << "\n";
  PrintTables(x,i-1); // Y llamamos a la funcion, con i-1 para 
  //                     eventualmente llegar al cero.
  return;
}