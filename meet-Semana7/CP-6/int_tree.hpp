#include <iostream>

using namespace std;

struct node
{
    int element;
    struct node* left_child;
    struct node* right_child;
};
typedef struct node Node;

Node* create_node(int data){
    Node* p__node;
    p__node->left_child = NULL;
    p__node->right_child = NULL;
    p__node->element = data;
    return p__node;
}