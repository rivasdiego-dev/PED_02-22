#include <iostream>
#include <stack>

using namespace std;

    // EJEMPLO DE ARBOLES UTILIZANDO LA LIBRERIA STACK

    int main ()
    {
        struct tree
        {
            string scientificName;
            string commonName;
            double height;
        }; typedef struct tree Tree;

        stack<tree> stackOfTrees; // Inicializar la pila.

        Tree tree01 = {"Abies alba", "Abeto blanco", 25};
        Tree tree02 = {"Cedrus libani", "Cedro del Libano", 32.6}; // Creamos 3 arboles
        Tree tree03 = {"Cupressus sempervirens", "Cipres comun", 28.3};

        stackOfTrees.empty() ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        stackOfTrees.push(tree01);
        stackOfTrees.push(tree02); // Apilamos los arboles creados
        stackOfTrees.push(tree03);

        stackOfTrees.empty() ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        while (!stackOfTrees.empty()) // Mientras la pila no este vacia
        {
            Tree p_Tree = stackOfTrees.top(); // Asignamos un arbol prototipo para imprimir los datos
            cout << "\nScientific Name: " << p_Tree.scientificName;
            cout << "\nCommon Name: " << p_Tree.commonName;
            cout << "\nHeight: " << p_Tree.height << "\n";

            stackOfTrees.pop(); // Y eliminamos de la pila el valor impreso
        }

        stackOfTrees.empty() ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        return 0;
    }