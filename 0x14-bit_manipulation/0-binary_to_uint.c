#include "main.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned int.
 *@b: A string representing the binary number.
 *
 *Return: The converted number, or 0 if there's an invalid character in the string
 *or if the input string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return 0;

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;
		result = result * 2 + (b[i] - '0');
	}

	return result;
}

