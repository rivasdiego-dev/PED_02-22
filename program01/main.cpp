#include <iostream>

using namespace std;

    // Estructura nodo-arbol
    struct node 
    {
        string scientificName;
        string commonName;
        double height;
        struct node *next = NULL;

    }; typedef struct node Tree;

    // Funciones (Definicion)
    void Pop (node *&stack, node data);
    void Push(node *&stack, string scientificName, string commonName, double height);
    bool IsEmpty(node *&stack);
    node Top(node *&stack);

    int main () 
    {
        // Variables
        Tree *stackOfTrees;
        int n;
        string p_scientificName, p_commonName, buffer;
        double p_height;

        // Codigo 

        cout << "Ingrese el numero de arboles que va a apilar: "; 
        cin >> n;

        for (int i=0; i < n; i++)
        {
            cout << "\n\nNombre Cientifico del " << i+1 << " arbol: ";
            getline(cin, buffer);
            getline(cin, p_scientificName);

            cout << "\nNombre Comun del " << i+1 << " arbol: ";
            getline(cin, p_commonName);

            cout << "\nAltura del " << i+1 << " arbol: ";
            cin >> p_height;
        }


        return 0;
    }

    // Funciones (Declaracion)

    void Pop(node *&stack, node data)
    {
        
    }

    void Push(node *&stack, string scientificName, string commonName, double height)
    {

    }
    
    bool IsEmpty(node *&stack)
    {

    }
