#include <string.h>
#include "main.h"

/**
 *_memset - function fills the first n bytes of the memory area.
 *@s: Point to a memory area
 *@b: constant byte
 *@n: number of bytes in the memory area
 *Return: New value for  s
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

return (s);
}
