#include <stdio.h>

/**
 *	main - Imprime el alfabeto en minúscula.
 *
 *	Return: si sale 0 está todo bien
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
