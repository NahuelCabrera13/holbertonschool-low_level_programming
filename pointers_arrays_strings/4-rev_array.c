#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: Array of integers.
 * @n: Number of elements.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
