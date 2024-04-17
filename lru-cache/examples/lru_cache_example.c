#include "lru_cache.h"

int main(void) {
    lruCache *cache = (lruCache *)malloc(sizeof(lruCache));
    lruCachePrint(cache);

    lruCacheFree(cache);
    return 0;
}