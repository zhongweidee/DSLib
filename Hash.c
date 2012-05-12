#ifndef SEARCH_H_
#define SEARCH_H_
#include <search.h> 
#endif
#ifndef HASH_H_
#define HASH_H_
#include "Hash.h"
#endif


void HashNew(Hash *h ,size_t size)
{
   int status;
   //h->htab ={0};
   //h->htab =calloc(30,sizeof(struct hsearch_data));
   h->htab=calloc(30,sizeof(struct hsearch_data));
   memset(h->htab,0,sizeof(h->htab));
   h->initialNumOfElem=size;
   h->retElem =malloc(sizeof(ENTRY *));
   assert(h->retElem !=0);
   ENTRY e;
   status=hcreate_r(h->initialNumOfElem,h->htab);
   assert(status!=0);
}

void HashInsert(Hash *h,char *key,char *value)
{
   int status;
   (h->elem).key=key;
   (h->elem).data=value;
   status = hsearch_r(h->elem,ENTER,&(h->retElem),(h->htab));
   assert(status!=0);
}
void *HashValueAtKey(Hash *h,const char *key)
{
   int status;
   status = hsearch_r(h->elem,FIND,&(h->retElem),(h->htab));
   assert(status!=0);
   return (h->retElem)->data;
}

void HashFree(Hash *h)
{
 hdestroy_r(h->htab);
} 

