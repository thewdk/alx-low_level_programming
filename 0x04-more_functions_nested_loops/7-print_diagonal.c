#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal.
* @n: length of line
* Return: nothing
**/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		a = 0;

		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
