#include <iostream>
#include <fstream>

using namespace std;

struct greeting
{
    string autor;
    string saludo;
};
typedef struct greeting Greet;


int main () {
    string wave;
    Greet newWave;


    fstream saludos("./saludos.txt", ios::out | ios::app);
    saludos.close();

    saludos.open("./saludos.txt", ios::in);
    
    cout << "SALUDOS EN ARCHIVO:\n";

    while (!saludos.eof())
    {
        
        getline(saludos, wave);
        if (!(wave == ""))
            cout << "\tAutor: " << wave << "\n";
        getline(saludos, wave);
        if (!(wave == ""))
            cout << "\tSaludo: " << wave << "\n";
    }
    saludos.close();



    saludos.open("./saludos.txt", ios::out | ios::app);
    cout << "Agregar autor del saludo:  ";
    getline(cin, newWave.autor);
    if (!(newWave.autor == ""))
        saludos << newWave.autor << "\n";

    cout << "Agregar nuevo saludo:  ";
    getline(cin, newWave.saludo);
    if (!(newWave.saludo == ""))
        saludos << newWave.saludo << "\n";



    return 0;
}