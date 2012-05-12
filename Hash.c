#define _GNU_SOURCE // must for GNU hsearch

typedef struct {
    ENTRY elem;
    ENTRY *retElem; 
    struct hsearch_data htab; 
    size_t initialNumOfElem; 
    size_t existNumOfElem; 
    struct hsearch_data htab;
} Hash

void HashNew(Hash *h ,size_t size)
{
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

void CstringDelete(Hash *h)
{
 hdestroy_r(&(h->htab));
} 

