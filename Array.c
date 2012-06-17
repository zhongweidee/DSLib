
#include <obstack.h>
#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free
#include "Array.h"
     

void ArrayAllocFailed(void){
  printf("Error: array alloc memory failed!\n");
}

void ArrayNew(Array *arr)
{
arr->obstack_ptr = (struct obstack *) xmalloc (sizeof (struct obstack));
obstack_init (myobstack_ptr);
obstack_alloc_failed_handler =&ArrayAllocFailed;
}

void ArrayPush(Array *arr,void *src,size_t sizeOfSrc){
   void *dest =obstack_alloc(arr->obstackPtr,sizeOfSrc); 
   memcpy(dest,src,sizeOfSrc);
}
void ArrayPopString(Array *arr,char *src){
  src = obstack_copy0(arr->obstackPtr,
}
void ArrayPop(Array *arr,void *src,size_t sizeOfSrc){
}


void ArrayFree(Array *arr){
    obstack_free(arr->obstackPtr,0); 
}
