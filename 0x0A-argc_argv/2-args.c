#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments
 * Return: 0 - success, non 0- failure
 * @argc: Number of arguments
 * @argv: Arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
