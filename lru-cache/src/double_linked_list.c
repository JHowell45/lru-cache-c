#include <stdlib.h>
#include <stdio.h>

#include "double_linked_list.h"

node * newNode(int id) {
    node *n = (node *)malloc(sizeof(node));
    n->id = id;
    n->parent = NULL;
    n->child = NULL;
    return n;
}

void nodeAddParent(node *root, node *parent) {
    root->parent = parent;
    parent->child = root;
}

void nodeSetParentNull(node *root) {
    root->parent->child = NULL;
    root->parent = NULL;
}

void nodeAddChild(node *root, node *child) {
    root->child = child;
    child->parent = root;
}

void nodeSetChildNull(node *root) {
    root->child->parent = NULL;
    root->child = NULL;
}

bool nodeHasParent(node *n) {
    return n->parent != NULL;
}

bool nodeHasChild(node *n) {
    return n->child != NULL;
}

void nodePrint(node *n) {
    
}