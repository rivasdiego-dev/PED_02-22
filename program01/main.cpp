#include <iostream>
#include <cmath>

using namespace std;

int Summation (int i, int n, int x, int total);

int main() {
  int i = 0, total = 0, x,n;

  cout << "Ingresar el valor de 'N' -> "; cin >> n;
  
  cout << "\nIngresar el valor de 'X' -> "; cin >> x;

  cout << "\nValor total de la sumatoria:" << Summation(i,n,x,total);
  
  return 0;
}

int Summation (int i, int n, int x, int total) {
  
  if (i > n) 
  {
    return total;
  }

  total += pow(x,i);
  i++;

  return Summation(i,n,x,total);

}