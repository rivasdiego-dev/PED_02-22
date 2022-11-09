#include <iostream>
#include "../int_tree.hpp"

using namespace std;

void traverse_tree(Node* tree);

int main () {
    Node* BST = NULL;
    int n;
    cout << "Input array size: ";
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++){
        cout << "Input value in " << i+1 << " position: ";
        cin >> A[i];
        add_node(&BST, A[i]);
    }

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