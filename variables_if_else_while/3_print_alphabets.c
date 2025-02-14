#include <stdio.h>

/**
 * main - Imprime el alfabeto en minúsculas y luego en mayúsculas
 *
 * Return: si sale 0 está todo bien
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
