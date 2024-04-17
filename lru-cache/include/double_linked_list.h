#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdbool.h>

typedef struct node {
    int id;
    struct node *prev;
    struct node *next;
} node;

node * newNode(int id);

void nodeAddPrev(node *root, node *prev);

void nodeSetPrevNull(node *root);

void nodeAddNext(node *root, node *next);

void nodeSetNextNull(node *root);

bool nodeHasPrev(node *n);

bool nodeHasNext(node *n);

void nodePrint(node *n);

void nodePrintPath(node *n);

void nodePrintPathFromRoot(node *n);

#endif