#include<stdio.h>

/**
 *main - pepe
 *Return: 0 todo bien
 */
int main(void)
{
	int a;

	for (a = 0; a <= 100; a++)
	{

	if (a % 5 == 0 && a % 3 == 0)
	{		printf("FizzBuzz");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz");
	}
	else if (a % 3 == 0)
	{
		printf("Fizz");
	}
	else
	{
		printf("%d", a);
	}
	if (a != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
