#include <iostream>

using namespace std;

    // Estructura nodo-arbol
    struct node 
    {
        string scientificName;
        string commonName;
        double height;
        struct node *next = NULL;

    };

    // Funciones (Declaracion)
    void Pop (node *&stack, string &scientificName, string &commonName, double &height);
    void Push(node *&stack, string scientificName, string commonName, double height);
    node Top(node *&stack);

    int main () 
    {
        // Variables
        node *stackOfTrees = NULL;
        int n;
        string p_scientificName, p_commonName, buffer;
        double p_height;

        // Codigo 

        cout << "Ingrese el numero de arboles que va a apilar: "; 
        cin >> n;

        for (int i=0; i < n; i++)
        {
            cout << "\nNombre Cientifico del " << i+1 << " arbol: ";
            getline(cin, buffer);
            getline(cin, p_scientificName);

            cout << "Nombre Comun del " << i+1 << " arbol: ";
            getline(cin, p_commonName);

            cout << "Altura del " << i+1 << " arbol: ";
            cin >> p_height;

            Push(stackOfTrees, p_scientificName, p_commonName, p_height);
        }

        cout << "---------IMPRIMIENDO DATOS--------\n\n";

        while (stackOfTrees != NULL)
        {
            Pop(stackOfTrees,p_scientificName,p_commonName,p_height);
            
                cout << "\nNombre Cientifico: " << p_scientificName;
                cout << "\nNombre Comun: " << p_commonName;
                cout << "\nAltura: " << p_height;
                cout << "\n* * * * * * * * * * * * * * * * * * * * *";
        }
        cout << "\n\n---------FIN DE LA IMPRESION--------";

        return 0;
    }

    // Funciones (Definicion)

    void Pop(node *&stack, string &scientificName, string &commonName, double &height)
    {
        node *aux_Tree = stack;

        commonName = aux_Tree ->commonName;
        scientificName = aux_Tree ->scientificName;
        height = aux_Tree ->height;

        stack = aux_Tree -> next;

        delete aux_Tree;

    }

    void Push(node *&stack, string scientificName, string commonName, double height)
    {
        node *p_Tree = new node();
        
        p_Tree->commonName = commonName;
        p_Tree->scientificName = scientificName;
        p_Tree->height = height;

        p_Tree->next = stack;

        stack = p_Tree;

    }
