#include "main.h"
/**
 * _abs - print psitive or negative
 * @a: user input
 * Return: success 0
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
