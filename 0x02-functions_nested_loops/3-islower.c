#include "main.h"
#include <ctype.h>
/**
 *_islower - Entry
 *@c: accept input from stdin
 *Return: (0) SUCCESS, (1) FAILURE
 */

int _islower(int c)
{
	if (islower(c))
	return (1);
	else
	return (0);
}
