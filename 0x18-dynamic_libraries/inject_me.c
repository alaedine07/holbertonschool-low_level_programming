#include <stdio.h>
/* gcc preload.c -o preload.so -fPIC -shared */
int puts(const char *str)
{
	printf("--> Please make me win!");
	return (0);
}
