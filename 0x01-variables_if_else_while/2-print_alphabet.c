#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (indicating success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return 0;
}

