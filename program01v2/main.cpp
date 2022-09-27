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

        
        return 0;
    }


    // Funciones
    void NewStack(Node *s)
    {
        *s = NULL;
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
            return {{""},{""},{0}};
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
            return {{""},{""},{0}};
        }
    }



    

