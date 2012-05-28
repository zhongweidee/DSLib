#define _GNU_SOURCE 
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Hash.c"
int main(void)
{
    Hash *h =malloc(sizeof(Hash));
    HashNew(h,30); 
    HashInsertString(h,"k1","v1"); 
    HashInsertPoint(h,"k2","v2"); 
    printf(" k2's value is %s\n",HashValueAtKey(h,"k2"));
    HashFree(h);
    free(h); 
}
