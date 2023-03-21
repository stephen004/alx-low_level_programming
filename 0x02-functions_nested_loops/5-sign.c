#include "main.h"
/**
 * print_sign - print psitive or negative
 * @n: user input
 * Return: 1 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (-1);
		}
	}
}
