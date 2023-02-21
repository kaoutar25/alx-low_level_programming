#include "main.h"

/**
 * _isalpha -> check for alphabetic letters
 * @c: a character to be check on
 * Return: returns 1 and 0 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
