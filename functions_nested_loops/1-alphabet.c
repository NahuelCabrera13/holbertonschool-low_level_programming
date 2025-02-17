#include <unistd.h>

/* void - escribe el avecedario en minuscula
 *
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, alphabet, 27);
}

int main(void)
{
	print_alphabet();
	return (0);
}
