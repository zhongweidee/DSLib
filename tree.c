#ifndef TREE_H
#define TREE_H
#include ./Tree.h
#endif

void TreeNew(Tree *tree,int (*compar)(const void *,const void *)){
    tree->root =NULL;
    tree->compar=compar;
}
void TreeInsert(Tree *tree,const void *key){
     void *val;
     assert((tree->compar)!=0); 
     val=tsearch(key,tree->root,tree->compar);
     assert(val!=0); 
}

void TreeFind(Tree *tree,const void *key,void *retElem){
     retElem=tfind(key,tree->root,tree->compar);
     assert(retElem!=0); 
}

void TreeWalk(Tree *tree,action){
   twalk(tree->root,action); 
}
