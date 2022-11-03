#include <iostream>

using namespace std;

struct node
{
    double element;
    struct node *left_child;
    struct node *right_child;
};
typedef struct node Node;

Node *create_node(double data)
{
    Node *p__node = new Node;
    p__node->left_child = NULL;
    p__node->right_child = NULL;
    p__node->element = data;
    return p__node;
}

bool is_tree_empty(Node *root)
{
    return root == NULL;
}

void add_node(Node **root, double data)
{
    Node *p__node = create_node(data);

    if ((*root) == NULL){
        *root = p__node;
    }else{
        double value_in_root = (*root)->element;

        if (p__node->element < value_in_root)
            add_node(&(*root)->left_child, data);
        if (p__node->element > value_in_root)
            add_node(&(*root)->right_child, data);
    }
    return;
}

void print_tree(Node *root, int counter)
{
    if (root == NULL)
        return;
    else{
        print_tree(root->right_child, counter+1);
        for (int i = 0; i < counter; i++)
            cout << "    ";
        cout << root->element <<  "\n";
        print_tree(root->left_child, counter+1);
    }
}

void print_tree(Node *root){
    int counter = 0;
    print_tree(root, counter);
    cout << "\n";
    return;
}

void inorder_traversal(Node* tree){
    if (is_tree_empty(tree))
        return;
    inorder_traversal(tree->left_child);
    cout << tree->element << ", ";
    inorder_traversal(tree->right_child);
}
void preorder_traversal(Node* tree){
    if (is_tree_empty(tree))
        return;
    cout << tree->element << ", ";
    preorder_traversal(tree->left_child);
    preorder_traversal(tree->right_child);
}
void postorder_traversal(Node* tree){
    if (is_tree_empty(tree))
        return;
    postorder_traversal(tree->left_child);
    postorder_traversal(tree->right_child);
    cout << tree->element << ", ";
}
