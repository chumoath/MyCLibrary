#define size_t unsigned long long
/*
*  function: copy mem from src to dest
*  param:    void * dest, void * src, size_t size
*  return:   
*/
void
memcpy(void * dest, void * src, size_t size)
{
    char * _dest = (char * )dest;
    char * _src = (char * )src;
    while(size--)
	*_dest++ = *_src++;
}
