#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct node {
    int id;
    node *parent;
    node *child;
} node;

#endif