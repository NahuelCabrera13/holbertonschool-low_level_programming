#include"main.h"

/**
 * _isalpha - reconoce los caracteres en minuscula
 * @c: es la variable aignada
 * Return: 1 es si todo esta bien, 0 si no
 */
int _isalpha(int c)
{
	if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
