#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates Memory using malloc
 * @b: memory size
 * Return: Return memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mallocPointer;

	mallocPointer = malloc(b);
	if (b == NULL)
		exit(98);
	return (mallocPointer);
}
