#include "main.h"
/**
 * main - Entry point
 *print_alphabet -  a function that prints the alphabet, in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
