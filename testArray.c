#include <stdlib.h>
#include <stdio.h>
#include "Array.c"
int main(){
char *str=(char *)calloc(20,sizeof(char));
memcpy(str,"yyy",3);
Array *arr =(Array *)calloc(1,sizeof(arr));
ArrayNew(arr);
ArrayPush(arr,str,4);
ArrayPush(arr,"sdf",4);
ArrayPush(arr,"s1f",4);
ArrayPush(arr,"s2f",4);

printf("LOG: str is %s\n",));
printf("LOG: str is %s\n",str);
ArrayFree(arr);
free(arr);
free(str);
}
