#include "main.h"

/**
 * _isupper -> this is a function to check upper case alphas
 * @c: an integer paramer
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (1);
	}
	return (0);
}
