#ifndef _GNU_SOURCE 
#define _GNU_SOURCE // must for GNU hsearch
#endif
#ifndef SEARCH_H_
#define SEARCH_H_
#include <search.h>
#endif
typedef struct {
    ENTRY elem;
    ENTRY *retElem; 
    struct hsearch_data htab; 
    size_t initialNumOfElem; 
    size_t existNumOfElem; 
    struct hsearch_data htab;
} Hash
void HashNew(Hash *h,size_t size);
void HashInsert(Hash *h,const char *key,const char *value);
const char *HashValueAtKey(Hash *h,const char *key);
void HashFree(Hash *h);
