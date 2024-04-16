#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include "double_linked_list.h"
#include "hashmap.h"

typedef struct lruCache {
    node *head;
    node *tail;
    hashmap *lookup;
} lruCache;

lruCache * newLruCache(void);

#endif