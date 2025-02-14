#include <stdio.h>

/**
 * main - Imprime los números del 0 al 9 en base 10
 *
 * Return: si el numero es 0 esta todo bien
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
