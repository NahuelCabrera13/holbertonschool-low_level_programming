#include <stdio.h>

/*
 * main: imprime la potencia de 16
 *
 * return: si sale 0, está todo bien
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
