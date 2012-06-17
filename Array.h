typedef struct{
struct obstack *obstackPtr;
}Array;
void ArrayAllocFailed(void);
void ArrayNew(Array *arr);
void ArrayPush(Array *arr,void *src,size_t sizeOfSrc);
void ArrayFree(Array *arr);

