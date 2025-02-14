#include <stdio.h>

/**
 * main - Imprime el alfabeto en minúsculas en orden inverso.
 *
 * Return: Siempre 0 (Éxito)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
