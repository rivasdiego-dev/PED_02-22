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
    }; typedef struct node Node;
    

    // Funciones
    void NewStack();
    node Pop();
    void Push();
    bool Empty();
    node Top();


    // Main
    int main () {


        
        return 0;
    }


    // Funciones
    void NewStack();
    node Pop();
    void Push();
    bool Empty();
    node Top();

    // https://github.com/carlosxmerca/PED2022/blob/master/Stack/donuts_stack.png
    