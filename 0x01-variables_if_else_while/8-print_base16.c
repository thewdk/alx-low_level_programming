#include <stdio.h>
/**
 * main - Entry point
 * a program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;
    for (c = '48'; c <= '57'; c++)
        putchar(c);
    for (c = 'a'; c <= 'f'; c++)
        putchar(c);
    putchar('\n');
    return 0;
}
