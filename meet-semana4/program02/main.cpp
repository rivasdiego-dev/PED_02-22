#include <iostream>

using namespace std;

    // Estructura nodo-arbol
    struct node 
    {
        string name;
        bool isFunctional;
        int battery;
        struct node *next = NULL;

    };

    // Funciones (Declaracion)
    void Pop (node *&stack, string &name, bool &isFunctional, int &battery);
    void Push(node *&stack, string name, bool isFunctional, int battery);
    node Top(node *&stack);

    int main () 
    {
        // Variables
        node *stackOfTrees = NULL;
        int n, p_battery;
        bool p_isFunctional;
        char optionForFunctionalDevice;
        string p_name, buffer;


        // Codigo 

        cout << "Ingrese el numero de dispositivos que va a apilar: "; 
        cin >> n;

        for (int i=0; i < n; i++)
        {
            cout << "\nNombre del " << i+1 << " dispositivo: ";
            getline(cin, buffer);
            getline(cin, p_name);

            cout << "El dispositivo " << i+1 << " es funcional? (Y/N): ";
            cin >> optionForFunctionalDevice;
            
            if (optionForFunctionalDevice == 'Y' || optionForFunctionalDevice == 'y')
            {
                p_isFunctional = true;
            }
            else
            {
                p_isFunctional = false;
            }

            cout << "Bateria restante del  " << i+1 << " dispositivo: ";
            cin >> p_battery;

            Push(stackOfTrees, p_name, p_isFunctional, p_battery);
        }

        cout << "---------IMPRIMIENDO DATOS--------\n\n";

        while (stackOfTrees != NULL)
        {
            Pop(stackOfTrees,p_name,p_isFunctional,p_battery);
            
                cout << "\nNombre: " << p_name;
                cout << "\nEs funcional: " << p_isFunctional;
                cout << "\nBateria restante: " << p_battery;
                cout << "\n* * * * * * * * * * * * * * * * * * * * *";
        }
        cout << "\n\n---------FIN DE LA IMPRESION--------";

        return 0;
    }

    // Funciones (Definicion)

    void Pop(node *&stack, string &name, bool &isFunctional, int &battery)
    {
        node *aux_Tree = stack;

        isFunctional = aux_Tree ->isFunctional;
        name = aux_Tree ->name;
        battery = aux_Tree ->battery;

        stack = aux_Tree -> next;

        delete aux_Tree;

    }

    void Push(node *&stack, string name, bool isFunctional, int battery)
    {
        node *p_Tree = new node();
        
        p_Tree->isFunctional = isFunctional;
        p_Tree->name = name;
        p_Tree->battery = battery;

        p_Tree->next = stack;

        stack = p_Tree;

    }
