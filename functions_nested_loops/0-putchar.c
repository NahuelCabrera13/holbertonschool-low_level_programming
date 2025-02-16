#include <unistd.h>

/**
 * main - Imprime el mensaqje putchar
 *
 * Return: si sale 0 esta todo bien
 */

int main(void)
{
	write(1, "_putchar\n", 10);

	return (0);
}
