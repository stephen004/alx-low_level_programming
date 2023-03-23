#include "main.h"

/**
 * _isupper - Function for upper case character
 * @c: The number to be checked
 * Return: 1 for upper letter 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
