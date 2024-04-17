#include <stdlib.h>
#include <stdio.h>

#include "double_linked_list.h"

node * newNode(int id) {
    node *n = (node *)malloc(sizeof(node));
    n->id = id;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void nodeAddPrev(node *root, node *prev) {
    root->prev = prev;
    prev->next = root;
}

void nodeSetPrevNull(node *root) {
    root->prev->next = NULL;
    root->prev = NULL;
}

void nodeAddNext(node *root, node *next) {
    root->next = next;
    next->prev = root;
}

void nodeSetNextNull(node *root) {
    root->next->prev = NULL;
    root->next = NULL;
}

bool nodeHasPrev(node *n) {
    return n->prev != NULL;
}

bool nodeHasNext(node *n) {
    return n->next != NULL;
}

void nodePrint(node *n) {
    char *prev = "NULL";
    char *next = "NULL";

    if (nodeHasPrev(n)) {
        asprintf(&prev, "%d", n->prev->id);
    }

    if (nodeHasNext(n)) {
        asprintf(&next, "%d", n->next->id);
    }

    printf("Node { id: %d, prev: %s, next: %s }\n", n->id, prev, next);
}

void nodePrintPath(node *n) {
    printf("(%d)", n->id);
    node *temp = n->next;
    while (temp != NULL) {
        printf("->(%d)", temp->id);
        temp = temp->next;
    }
    printf("\n");
}

void nodePrintPathFromRoot(node *n) {
    node *root = n;
    while (root->prev != NULL) {
        root = root->prev;
    }
    nodePrintPath(root);
}