#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
#include<stddef.h>
/**
 * print_strings - pepe
 * @separator: pepe
 * @n: pepe
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	if (n < 0)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
