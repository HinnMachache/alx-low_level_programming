#include "main.h"
/**
 * reverse_array - Reverses elements of an array
 * @a: array to be reversed
 * @n: Number of elements
 */

void reverse_array(int *a, int n)
{
	int temp, start = 0, end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
