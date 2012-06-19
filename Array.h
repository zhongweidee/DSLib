typedef struct{
//struct obstack *obstackPtr;
struct obstack *pool;
size_t lengthOfLastOne;
}Array;

void ArrayAllocFailed(void);
void ArrayNew(Array *arr);
void ArrayPush(Array *arr,void *src,size_t sizeOfSrc);
void *ArrayPop(Array *arr);
void ArrayFree(Array *arr);

