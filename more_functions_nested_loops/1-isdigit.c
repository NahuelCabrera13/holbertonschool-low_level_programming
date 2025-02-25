#include"main.h"

/**
 * _isdigit - reconoce los caracteres en minuscula
 * @c: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no
 */
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
