#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include <stdbool.h>

typedef struct node {
    int key;
    struct node *prev;
    struct node *next;
} node;

node * newNode(int id);

void freeNode(node *n);

void nodeFreeAll(node *n);

void nodeSetPrev(node *root, node *prev);

void nodeSetNext(node *root, node *next);

bool nodeHasPrev(node *n);

bool nodeHasNext(node *n);

void nodePrint(node *n);

void nodePrintPath(node *n);

#endif