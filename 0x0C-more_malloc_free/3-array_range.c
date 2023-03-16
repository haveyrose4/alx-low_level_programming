#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - the function that creates an array of integers
 * @min: the minimum element of an array
 * @max: the maxmum elelment of an array
 * Return: If min > max, return NULL
 *         If malloc fails, return NULL
 *         the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ta, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ta = malloc(sizeof(*ta) * size);
	if (ta == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ta[i] = min++;
	return (ta);
}
