#include "main.h"
#include "stdio.h"

/**
 * print_line - Draws a straight line of underscores (_) in the terminal.
 * @n: The number of times the character _ should be printed.
 * If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
