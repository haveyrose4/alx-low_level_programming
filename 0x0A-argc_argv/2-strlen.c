#include "main.h"
/**
 * _strlen - the function that returns the length of a string
 * @s: the char s
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
