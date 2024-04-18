#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdlib.h>

typedef struct bucket {
    char* key;
    int value;
} bucket;

typedef struct hashmap {
    size_t capacity;
    size_t count;
    bucket **buckets;
} hashmap;

int hashmapSearch(hashmap *map, char* key);

void hashmapInsert(hashmap *map, char* key, int value);

void hashmapDelete(hashmap *map, char* key);

#endif