#include"main.h"

/**
 * print_last_digit - reconoce los caracteres en minuscula
 * @n: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no,
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + 0);
	}
	return (last_digit);
}
