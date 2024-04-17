#include <stdlib.h>
#include <stdio.h>

#include "../include/double_linked_list.h"

int main(void) {
    node *n = newNode(4);
    node *parent = newNode(2);
    nodeAddPrev(n, parent);
    nodePrint(n);
    return 0;
}