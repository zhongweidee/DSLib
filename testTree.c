#define _GNU_SOURCE 
#include <search.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "Tree.c"
int compare(const void *pa,const void *pb){
     if (*(int *) pa < *(int *) pb)
               return -1;
           if (*(int *) pa > *(int *) pb)
               return 1;
           return 0;
}
void action(const void *nodep,const VISIT which,const  int depth){
           int *datap;
           switch (which) {
           /*case postorder:
               datap = *(int **) nodep;
               printf("%6d\n", *datap);
               break;*/
           case leaf:
               printf("%s\n", *(const char **)(nodep));
               break;
                          }
}
int main(void)
{
    Tree *tree;
    tree= malloc(sizeof(Tree)); 
    TreeNew(tree,compare);
    printf("LOG: start to insert a\n");
    TreeInsert(tree,"a");
    printf("LOG: start to insert d\n");
    TreeInsert(tree,"d");
    printf("LOG: start to insert c\n");
    TreeInsert(tree,"c");
    printf("LOG: start to insert z\n");
    TreeInsert(tree,"z");
    TreeWalk(tree,action); 
    free(tree);
}
