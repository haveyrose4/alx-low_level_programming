#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - the function that allocates memory for an array, using malloc
 * @nmemb: the number of array members
 * @size: the size of bytes
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *         If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ta;
	unsigned int i, j;
	char *conv;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ta = malloc(nmemb * size);
	if (ta == NULL)
		return (NULL);
	j = size * nmemb;
	conv = ta;
	for (i = 0; i < j; i++)
		conv[i] = '\0';
	return (ta);
}
