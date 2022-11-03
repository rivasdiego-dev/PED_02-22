#include <iostream>

using namespace std;

struct int_node
{
    int element;
    struct int_node* left_child;
    struct int_node* right_child;
};
typedef struct int_node iNode;

struct double_node
{
    double element;
    struct double_node* left_child;
    struct double_node* right_child;
};
typedef struct double_node dNode;
