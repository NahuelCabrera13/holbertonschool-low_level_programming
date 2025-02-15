#include <stdio.h>

/**
 * main - Imprime la potencia de 16
 *
 * Return: si sale 0 esta todo bien
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
