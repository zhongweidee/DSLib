#include <obstack.h>
#define obstack_chunk_alloc malloc
#define obstack_chunk_free free
#include "Array.h"
/* memory pool refence the www.ibm.com/developerworks/cn/linux/l-memory */
#define obstack_chunk_alloc xmalloc
#define obstack_chunk_free free
void ArrayAllocFailed(void){
  printf("Error: array alloc memory failed!\n");
}

void ArrayNew(Array *arr)
{
arr->obstackPtr = (struct obstack *) malloc (sizeof (struct obstack));
obstack_init (arr->obstackPtr);
obstack_alloc_failed_handler =&ArrayAllocFailed;
obstack_alignment_mask(myobstack_ptr)=0;
}

void ArrayPush(Array *arr,void *src,size_t sizeOfSrc){
   void *dest =obstack_alloc(arr->obstackPtr,sizeOfSrc); 
   memcpy(dest,src,sizeOfSrc);
   arr->lengthOfLastOne=sizeOfSrc;
}
void *ArrayPop(Array *arr){
  //void *TopAddr= obstack_base(arr->obstackPtr); 
  return obstack_base(arr->obstackPtr);
}

void ArrayFree(Array *arr){
    obstack_free(arr->obstackPtr,0); 
    free(arr->obstackPtr);
}

