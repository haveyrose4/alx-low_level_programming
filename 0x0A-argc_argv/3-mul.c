#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - the program takes two numbers, multiply and return result
 * @argc: the argument count
 * @argv: the argument vector
 * Return: result or otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
