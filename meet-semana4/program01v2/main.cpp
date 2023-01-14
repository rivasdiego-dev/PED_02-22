#include <iostream>

using namespace std;

    //  Estructuras
    struct tree
    {
        string scientificName;
        string commonName;
        double height;
    }; typedef struct tree Tree;

    struct node
    {
        Tree element;
        struct node *next;
    }; typedef struct node *Node;
    

    // Funciones
    void NewStack(Node *s); // Inicializar una nueva pila.
    tree Pop(Node *s); // Retornar y eliminar el valor de top.
    void Push(Node *s, Tree tree); // Agregar un nuevo elemento "tree" a la pila.
    bool Empty(Node *s); // Devuelve TRUE si la pila está vacía, FALSE si no lo está.
    tree Top(Node *s); // Devuelve los datos del nodo que está en la cima (top).


    // Main
    int main () {

        Node stackOfTrees; // Creamos la pila

        NewStack(&stackOfTrees); // Inicializamos la pila.

        Tree tree01 = {"Abies alba", "Abeto blanco", 25};
        Tree tree02 = {"Cedrus libani", "Cedro del Libano", 32.6}; // Creamos 3 arboles
        Tree tree03 = {"Cupressus sempervirens", "Cipres comun", 28.3};

        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";
        // condicion ? bloque de codigo a ejecutar si la condicion es cierta : bloque de codigo a ejecutar si la condicion es falsa;

        Push(&stackOfTrees, tree01);
        Push(&stackOfTrees, tree02); // Apilamos los arboles creados
        Push(&stackOfTrees, tree03);

        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        cout << "\nLet's print some trees!\n";

        while (!Empty(&stackOfTrees)) // Mientras la pila no este vacia
        {
            Tree p_Tree = Top(&stackOfTrees); // Asignamos un arbol prototipo para imprimir los datos
            cout << "\nScientific Name: " << p_Tree.scientificName;
            cout << "\nCommon Name: " << p_Tree.commonName;
            cout << "\nHeight: " << p_Tree.height << "\n";

            Pop(&stackOfTrees); // Y eliminamos de la pila el valor impreso
        }
        
        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        return 0;
    }


    // Funciones
    void NewStack(Node *s)
    {
        *s = NULL; // Asignamos el valor NULL al puntero de la pila
        cout << "New stack is ready!\n";
    }

    tree Pop(Node *s)
    {
        if (!Empty(s)) // Si la pila no esta vacia
        {
            struct node *aux_Node = *s; // Utilizamos un nodo auxiliar
            Tree tree = (*s)->element; // Copiamos los datos en caso de utilizarlos

            *s = (*s)->next; // Apuntamos la pila al dato que está abajo del top
            delete aux_Node; // Borramos el nodo auxiliar
            return tree; // Devolvemos el dato que eliminamos
        }

        else
        {
            return {"","",0}; // Si la pila esta vacia, devolvemos un arbol vacío.
        }
    }
    
    bool Empty(Node *s)
    {
        return *s == NULL; // Preguntar si la pila apunta a un nodo o a NULL
    }
    
    void Push(Node *s, Tree tree)
    {
        struct node *aux_Node = new struct node; // Utilizamos un nodo auxiliar
        
        aux_Node->element = tree; // Le asignamos los datos 
        aux_Node->next = *s; // Y al puntero del nodo, le asignamos la dirección
                             // de memoria del nodo que estaba en "top".

        *s = aux_Node; // Y asignamos a la pila el nuevo nodo, que ahora estará en "top".

    }
    
    tree Top(Node *s)
    {
        if(!Empty(s)) // Si la pila no está vacía
        {
            return (*s)->element; //  Devuelve el valor que está encima.
        }
        else // Si no
        {
            return {"","",0}; // Devolvemos un dato árbol vacío.
        }
    }



    

