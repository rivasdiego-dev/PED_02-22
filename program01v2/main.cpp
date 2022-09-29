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
    void NewStack(Node *s);
    tree Pop(Node *s);
    void Push(Node *s, Tree tree);
    bool Empty(Node *s);
    tree Top(Node *s);


    // Main
    int main () {

        Node stackOfTrees;

        NewStack(&stackOfTrees);

        Tree tree01 = {"Abies alba", "Abeto blanco", 25};
        Tree tree02 = {"Cedrus libani", "Cedro del Libano", 32.6};
        Tree tree03 = {"Cupressus sempervirens", "Cipres comun", 28.3};

        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        Push(&stackOfTrees, tree01);
        Push(&stackOfTrees, tree02);
        Push(&stackOfTrees, tree03);

        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        cout << "\nLet's print some trees!\n";

        while (!Empty(&stackOfTrees))
        {
            Tree p_Tree = Top(&stackOfTrees);
            cout << "\nScientific Name: " << p_Tree.scientificName;
            cout << "\nCommon Name: " << p_Tree.commonName;
            cout << "\nHeight: " << p_Tree.height << "\n";

            Pop(&stackOfTrees);
        }
        
        Empty(&stackOfTrees) ? cout << "\nEmpty!\n": cout << "\nThere's something in the stack...\n";

        return 0;
    }


    // Funciones
    void NewStack(Node *s)
    {
        *s = NULL;
        cout << "New stack is ready!\n";
    }

    tree Pop(Node *s)
    {
        if (!Empty(s))
        {
            struct node *aNode = *s;
            Tree tree = (*s)->element;

            *s = (*s)->next;
            delete aNode;
            return tree;
        }

        else
        {
            return {"","",0};
        }
    }
    
    bool Empty(Node *s)
    {
        return *s == NULL;
    }
    
    void Push(Node *s, Tree tree)
    {
        struct node *aNode = new struct node;
        
        aNode->element = tree;
        aNode->next = *s;

        *s = aNode;

    }
    
    tree Top(Node *s)
    {
        if(!Empty(s))
        {
            return (*s)->element;
        }
        else
        {
            return {"","",0};
        }
    }



    

