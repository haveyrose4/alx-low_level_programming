#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - the unction that concatenates two strings
 * @s1: the destination string
 * @s2: the source string
 * @n: the n bytes of s2 to be concatenated
 * Return: if NULL is passed then s1=="" or/and s2==""
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ta;
	unsigned int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length = n;
	for (i = 0; s1[i]; i++)
		length++;
	ta = malloc(sizeof(*ta) * (length + 1));
	if (ta == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[i]; i++, j++)
		ta[j] = s1[i];
	for (i = 0; (s2[i] && i < n); i++, j++)
		ta[j] = s2[i];
	ta[j] = '\0';
	return (ta);
}
