#ifndef HASH_H_
#define HASH_H_
#include "hash.h"
#endif
void HashNew(Hash *h,size_t size){
   int status;
   h->htab ={0};
   memset(&htab,0,sizeof(htab));
   h->initialNumOfElem=size;
   h->retElem =malloc(sizeof(ENTRY *));
   assert(h->retElem !=0);
   ENTRY e,
   status=hcreate_r(h->initialNumOfElem,&htab);
   assert(status!=0);
}

void HashInsert(Hash *h,const char *key,const char *value)
{
   int status;
   (h->elem).key=key;
   (h->elem).data=value;
   status = hsearch_r(h->elem,ENTER,&(h->retElem),&(h->htab));
   assert(status!=0);
}
const char *HashValueAtKey(Hash *h,const char *key)
{
   int status;
   status = hsearch_r(h->elem,FIND,&(h->retElem),&(h->htab));
   assert(status!=0);
   return h->retElem;
}

void HashFree(Hash *h)
{
 HashFree(&(h->htab));
} 

