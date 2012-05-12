#include <stdlib.h>
#include <stdio.h>
#include "Hash.c"
int main(void){
    Hash *h =malloc(sizeof(Hash));
    HashNew(h,30); 
    HashInsert(h,"k1","v1"); 
    HashInsert(h,"k2","v2"); 
    printf(" k2's value is %s",HashValueAtKey(h,"k2"));
    HashDelete(h);
    free(h); 
}
