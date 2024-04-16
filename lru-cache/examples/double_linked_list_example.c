#include <stdlib.h>
#include <stdio.h>

#include "../include/double_linked_list.h"

int main(void) {
    node *n = newNode(4);
    nodePrint(n);
    node *parent = newNode(2);
    nodeAddParent(n, parent);
    nodePrint(n);
    return 0;
}