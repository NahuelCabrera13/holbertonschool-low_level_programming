#include"main.h"

/**
 * print_alphabet_x10 - imprime el avecedario 10 veces
 */
void print_alphabet_x10(void)
{
	int i;
	char pepe;

	for (i = 1; i <= 10; i++)
	{
		for (pepe = 'a'; pepe <= 'z'; pepe++)
		{
			_putchar(pepe);
		}
		_putchar('\n');
	}
}
