#include <stdio.h>

/**
 * main - escribe todas las posibles combinaciones de numeros de un solo digito
 *
 * Return: si sale 0 esta todo bien
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
