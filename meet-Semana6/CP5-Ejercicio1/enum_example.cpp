#include <iostream>

using namespace std;

enum colores
{
    verde,azul,rojo,amarillo,negro,blanco
};

enum tallas
{
    xsmall,small,medium,large,xlarge
};

struct ropa
{
    colores color;
    tallas talla;
};
typedef struct ropa Prenda;

string ObtenerColor (Prenda e);

int main()
{

    Prenda prenda01 = {verde,medium};

}

string ObtenerColor (Prenda e)
{
    switch (e.color)
    {
    case verde:
        return "Verde";
    default:
        break;
    }
}