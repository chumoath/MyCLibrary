#include <stdio.h>
#include <stdlib.h>
void memcpy(void * dest, void * src, size_t size);
void memset(void * dest, char num, size_t size);

int
main(void)
{
   char * str = "hello world\n";
   char * cpy = (char*)malloc(13 * sizeof(char));
   memset(cpy, 0, 13);
   memcpy(cpy, str, 13);
   printf("copy is %s", cpy);
}
