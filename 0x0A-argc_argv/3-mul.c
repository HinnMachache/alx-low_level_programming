#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multplies integers
 * @args: First Parameter
 * @argv: Second Paramter
 * Return: 0-succes,
 */

int main(int args, char *argv[])
{
	int result = 0;

	if (args < 2)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
