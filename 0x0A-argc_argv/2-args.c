#include "main.h"
#include <stdio.h>
/**
 * main - Prints the name of th programm
 * @argc: Argument counter
 * @argv: Arguments passed
 * Return: 0- success, non 0 - error
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
