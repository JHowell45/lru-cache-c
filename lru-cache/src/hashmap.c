#include <stdlib.h>
#include <string.h>

#include "hashmap.h"

static bucket * newBucket(const char *key, int value) {
    bucket *item = (bucket *)malloc(sizeof(bucket));
    item->key = strdup(key);
    item->value = value;
    return item;
}

static void freeBucket(bucket *item) {
    free(item->key);
    free(item);
}

hashmap * newHashmap(void) {
    hashmap *map = (hashmap *)malloc(sizeof(hashmap));
    map->capacity = 100;
    map->count = 0;
    map->buckets = calloc(map->capacity, sizeof(bucket *));
    return map;
}

void freeHashmap(hashmap *map) {
    for (int i = 0; i < map->count; i++) {
        bucket *item = map->buckets[i];
        if (item != NULL) {
            freeBucket(item);
        }
    }
    free(map->buckets);
    free(map);
}

static int modularHashing(const int value, const int prime) {
    return value % prime;
}