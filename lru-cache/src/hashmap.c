#include <stdlib.h>
#include <string.h>

#include "hashmap.h"

static bucket * newBucket(const char *key, int value) {
    bucket *item = (bucket *)malloc(sizeof(bucket));
    item->key = strdup(key);
    item->value = value;
    return item;
}

static void deleteBucket(bucket *item) {
    free(item->key);
    free(item->value);
    free(item);
}

hashmap * newHashmap(void) {
    hashmap *map = (hashmap *)malloc(sizeof(hashmap));
    map->capacity = 100;
    map->count = 0;
    map->buckets = calloc(map->capacity, sizeof(bucket *));
}