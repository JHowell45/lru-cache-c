#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <stdlib.h>
#include <stdbool.h>

#include "double_linked_list.h"
#include "hashmap.h"

typedef struct lruCache {
    size_t capacity;
    node *head;
    node *tail;
    hashmap *lookup;
} lruCache;

lruCache * newLruCache(size_t capacity);

void lruCacheFree(lruCache *cache);

bool lruCacheHas(lruCache *cache, int value);

void lruCacheInsertHead(lruCache *cache, node *newNode);

void lruCachePopTail(lruCache *cache);

void lruCachePrint(lruCache *cache);

#endif