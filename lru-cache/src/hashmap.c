#include <stdlib.h>
#include <string.h>

#include "hashmap.h"

static bucket * newBucket(const char *key, int value) {
    bucket *item = (bucket *)malloc(sizeof(bucket));
    item->key = strdup(key);
    item->value = value;
    return item;
}