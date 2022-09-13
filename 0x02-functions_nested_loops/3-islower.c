#include "main.h"

/**
 * _islower - checks whether or not a character is lowercase
 * @c: character to check
 * Return: 0 or 1
 */


int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
