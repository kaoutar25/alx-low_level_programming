#include "main.h"

/**
 * _islower -> checks if the charachter is lowercase
 * @c: a character argument
 * Return: returns 1 and 0 depending on condition
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
