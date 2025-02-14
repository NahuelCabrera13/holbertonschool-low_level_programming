#include <stdio.h>

/**
 * main - Imprime el alfabeto en minúscula.
 *
 * Return: si sale 0 esta todo bien
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
