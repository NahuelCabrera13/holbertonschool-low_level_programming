#include <unistd.h>

/**
 * print_alphabet - Imprime el alfabeto en minúsculas seguido de una nuev line
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, alphabet, 27);
}
