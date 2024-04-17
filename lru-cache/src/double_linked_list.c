#include <stdlib.h>
#include <stdio.h>

#include "double_linked_list.h"

node * newNode(int key) {
    node *n = (node *)malloc(sizeof(node));
    n->key = key;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void freeNode(node *n) {
    n->prev = NULL;
    n->next = NULL;
    free(n);
}

void nodeFreeAll(node *n) {
    if (n->prev != NULL) {
        node *prev = n->prev;
        while(prev != NULL) {
            node *temp = prev;
            prev = prev->prev;
            free(temp);
        }
    } 
    if (n->next != NULL) {
        node *next = n->next;
        while(next != NULL) {
            node *temp = next;
            next = next->next;
            free(temp);
        }
    }
    free(n);
}

void nodeSetPrev(node *root, node *prev) {
    root->prev = prev;
}

void nodeSetNext(node *root, node *next) {
    root->next = next;
}

bool nodeHasPrev(node *n) {
    return n->prev != NULL;
}

bool nodeHasNext(node *n) {
    return n->next != NULL;
}

void nodePrint(node *n) {

}

void nodePrintPath(node *n) {
    printf("(%d)", n->key);
    node *temp = n->next;
    while (temp != NULL) {
        printf("->(%d)", temp->key);
        temp = temp->next;
    }
    printf("\n");
}