#include <unistd.h>

/**
 * print_alphabet - Imprime el alfabeto en minúsculas seguido de una nuev linea
 *
 * return si sale 0 esta todo bien
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, alphabet, 27);

	return (0);
}
