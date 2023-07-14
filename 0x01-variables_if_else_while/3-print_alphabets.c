#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a space,
 *                  and then in uppercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";

	for (int i = 0; i < 53; i++)
		putchar(alphabet[i]);

	putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

