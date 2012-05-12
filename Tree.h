#ifndef SEARCH_H_
#define SEARCH_H_
#include <search.h>
#endif

typedef struct {
   void *root;
   int (*compar)(const void *key1,const void *key2);
   (void )(*action)(const void *node ,const VISIT *,const int depth);
}
