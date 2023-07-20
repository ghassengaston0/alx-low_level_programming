#include "main.h"
#include "stdio.h"

/**
 * print_line - Draws a straight line of underscores (_) in the terminal.
 * @n: The number of times the character _ should be printed.
 * If n is 0 or less, the function should only print \n.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
