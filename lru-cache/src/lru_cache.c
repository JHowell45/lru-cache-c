#include <stdlib.h>

#include "double_linked_list.h"
#include "lru_cache.h"

lruCache * newLruCache(size_t capacity) {
    lruCache *cache = (lruCache *)malloc(sizeof(lruCache));
    cache->capacity = capacity;
    cache->head = NULL;
    cache->tail = NULL;
    cache->lookup = NULL;
    return cache;
}

void lruCacheFree(lruCache *cache) {
    if (cache->head != NULL) {
        nodeFreeAll(cache->head);
    }
    if (cache->tail != NULL) {
        nodeFreeAll(cache->tail);
    }
    free(cache);
}

void lruCacheInsertHead(lruCache *cache, node *newNode) {
    if (cache->head == NULL) {
        cache->head = newNode;
        return;
    }
    if (nodeHasPrev(newNode) && nodeHasNext(newNode)) {
        nodeSetNext(newNode->prev, newNode->next);
        nodeSetPrev(newNode->next, newNode->prev);
    } else {
        if (nodeHasPrev(newNode)) {
            nodeSetNext(newNode->prev, NULL);
        }
        if (nodeHasNext(newNode)) {
            nodeSetNext(newNode->next, NULL);
        }
    }
    newNode->prev = NULL;
    newNode->next = cache->head;
    cache->head = newNode;
}

void lruCachePopTail(lruCache *cache) {
    node *oldTail = cache->tail;
    cache->tail = oldTail->prev;
    freeNode(oldTail);
}

void lruCachePrint(lruCache *cache) {

}