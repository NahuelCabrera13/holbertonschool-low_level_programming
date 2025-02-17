#include "main.h"

/**
	* print_alphabet - Imprime el alfabeto en minúsculas seguido de una nuev
	*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	_putchar('\n');
}
