#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of th programm
 * @argc: Argument counter
 * @argv: Arguments passed
 * Return: 0- success, non 0 - error
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
