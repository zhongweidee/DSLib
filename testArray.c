#include <stdlib.h>
#include <stdio.h>
#include "Array.c"
int main(){
char *str=(char *)calloc(20,sizeof(char));
memcpy(str,"yyy",3);
Array *arr =(Array *)calloc(1,sizeof(arr));
ArrayNew(arr);
ArrayPush(arr,str,3);
printf("LOG: str is %s\n",(char *)(ArrayPopString(arr)));
printf("LOG: str is %s\n",str);
ArrayFree(arr);
free(arr);
free(str);
}
