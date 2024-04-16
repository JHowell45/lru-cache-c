#include <stdlib.h>

#include "double_linked_list.h"

node * newNode(int id) {
    node *n = (node *)malloc(sizeof(node));
    n->id = id;
    n->parent = NULL;
    n->child = NULL;
    return n;
}