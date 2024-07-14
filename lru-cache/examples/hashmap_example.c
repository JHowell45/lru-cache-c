#include "hashmap.h"

int main(void) {
    hashmap *map = newHashmap();

    freeHashmap(map);
    return 0;
}