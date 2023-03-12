#include "main.h"
/**
 * _isdigit - the main entry
 * Deacription: the function checks for a digit (0 through 9)
 * @c: the integer
 * Return: 1 if c or 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

