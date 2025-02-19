#include"main.h"

/**
 * print_sign - reconoce los caracteres en minuscula
 * @n: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no,
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	_putchar('-');
	return (-1);
}
