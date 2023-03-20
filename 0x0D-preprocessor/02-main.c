#ifndef FILE_NAME_H
#define FILE_NAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME	"2-main.c"

#endif

/**
 * main - func print out name of file a program was compiled from
 *
 * Return: (0) on successful
 */
int main(void)
{
	/* char *ptr = FILE_NAME; */

	printf("%s\n", __FILE__);
	return (0);
}
