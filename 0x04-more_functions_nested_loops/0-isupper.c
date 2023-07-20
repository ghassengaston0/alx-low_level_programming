#include "main.h"
#include "stdio.h"

/**
 *  _isupper - checks for an uppercase character.
 *  @c: The character to be checked.
 *
 *  Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
