#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdbool.h>

typedef struct node {
    int id;
    struct node *parent;
    struct node *child;
} node;

node * newNode(int id);

void nodeAddParent(node *root, node *parent);

void nodeSetParentNull(node *root);

void nodeAddChild(node *root, node *child);

void nodeSetChildNull(node *root);

bool nodeHasParent(node *n);

bool nodeHasChild(node *n);

void nodePrint(node *n);

#endif