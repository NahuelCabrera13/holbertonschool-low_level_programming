#include <unistd.h>
#include <stdio.h>

/**
 * main - Imprime el mensaqje putchar
 *
 * Return: si sale 0 esta todo bien
 */

int main(void)
{
	write(1, "_putchar", 8);
	printf("\n");

	return (0);
}
