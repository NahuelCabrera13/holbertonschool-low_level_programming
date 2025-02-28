#include "main.h"
#include "stdio.h"
/**
 * print_array - pepe
 *@a: array
 *@n: pepe
 */
void print_array(int *a, int n)
{
	int cont;

	if (n <= 0)
	{
		printf("\n");
	}
	for (cont = 0; cont < n; cont++)
	{
		if (cont + 1 != n)
			printf("%d, ", a[cont]);
		else
			printf("%d\n", a[cont]);
	}
}
