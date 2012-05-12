#ifndef _GNU_SOURCE 
#define _GNU_SOURCE // must for GNU hsearch
#endif
typedef struct {
    ENTRY elem;
    ENTRY *retElem; 
    struct hsearch_data htab; 
    size_t initialNumOfElem; 
    size_t existNumOfElem; 
    struct hsearch_data htab;
} Hash
