include "main.h"

/**
 * _isalpha - checks whether or not a character is an alphabet
 * @c: ascii value
 * Return: 1 if it is lowercase or 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		Return(0);
	}
}

