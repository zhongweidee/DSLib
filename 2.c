#include <stdlib.h>
#include <stdio.h>
#include <obstack.h>
#include <string.h>
#define obstack_chunk_alloc malloc
#define obstack_chunk_free free

void my_obstack_alloc_failed (void)
{
}


int main()
{
struct obstack *myobstack_ptr = (struct obstack *) malloc (sizeof (struct obstack));
obstack_init (myobstack_ptr);
obstack_alloc_failed_handler = &my_obstack_alloc_failed;
obstack_alignment_mask(myobstack_ptr)=0;
const char *str="dfs";
//const char *str1="yy";
char *s=(char*)obstack_alloc(myobstack_ptr,strlen(str)+1);
//char *s1=(char*)obstack_alloc(myobstack_ptr,strlen(str)+1);
memcpy(s,str,strlen(str)+1);
//memcpy(s1,str1,strlen(str1)+1);
printf("LOG: before address is %p\n",s);
printf("LOG: finish address is %p\n",(obstack_finish(myobstack_ptr)));

void *p=obstack_base(myobstack_ptr);
printf("LOG: p is %s\n",(char *)p-strlen(str)-1);
printf("LOG: after address is %p\n",p);
printf("LOG: next free address is %p\n",(obstack_next_free(myobstack_ptr)));
}
