#include <stdio.h>
#include "main.h"
/**
 * main - Prints the name of th programm
 * @argc: Argument counter
 * @argv: Arguments passed
 * Return: 0- success, non 0 - error
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
