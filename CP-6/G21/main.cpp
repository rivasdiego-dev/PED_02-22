#include <iostream>
#include "../double_tree.hpp"

using namespace std;

void traverse_tree(Node* tree);

int main () {
    const int n = 7;
    double A[n] = {4.5,2.8,6.7,7.4,5.1,3.8,1.9};
    Node* BST = NULL;
    
    for (int i = 0; i < n; i++)
        add_node(&BST, A[i]);

    cout << "Printing the hole tree:\n\n";
    print_tree(BST);
    cout << "Right sub-tree:\n";
    traverse_tree(BST->right_child);
    cout << "\nLeft sub-tree:\n";
    traverse_tree(BST->left_child);

}

void traverse_tree(Node* tree){
    cout << "Inorder -> [ ";
    inorder_traversal(tree);
    cout << "]\n";

    cout << "PreOrder -> [ ";
    preorder_traversal(tree);
    cout << "]\n";

    cout << "PostOrder -> [ ";
    postorder_traversal(tree);
    cout << "]\n";
}