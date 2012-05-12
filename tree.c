typedef struct {
   void *root;
   int (*compar)(const void *key1,const void *key2);
   (void )(*action)(const void *node ,const VISIT *,const int depth);
}
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
