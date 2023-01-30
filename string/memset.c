#define size_t unsigned long long
void
memset(void * dest, char num, size_t size)
{
    char * _dest = (char*)dest;
    while(size--)
	*_dest++ = num;
}
