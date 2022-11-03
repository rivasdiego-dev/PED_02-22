#include <iostream>
#include "../double_tree.hpp"

using namespace std;

int main () {
    const int n = 7;
    double A[n] = {4.5,2.9,6.7,7.4,5.1,3.8,1.9};
    Node* BST = NULL;
    
    for (int i = 0; i < n; i++)
        add_node(&BST, A[i]);

    print_tree(BST);
    
}