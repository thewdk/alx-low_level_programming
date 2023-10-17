#include "main.h"
/**
* print_rev - prints a string, followed by a new line
* @s: pointer to the string to print
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	x = i - 1;
	for (; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
