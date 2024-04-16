#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct node {
    int id;
    node *parent;
    node *child;
} node;

node * newNode(int id);

void nodeAddParent(node *root, node *parent);

void nodeSetParentNull(node *root);

void nodeAddChild(node *root, node *child);

void nodeSetChildNull(node *root);

#endif