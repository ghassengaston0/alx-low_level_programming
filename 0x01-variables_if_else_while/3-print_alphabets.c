#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 indicates success
 */
int main(void)
{
    int a = 'a';
    int A = 'A';

    for (; a <= 'z'; a++)
        putchar(a);

    for (; A <= 'Z'; A++)
        putchar(A);

    putchar('\n');

    return (0);
}


