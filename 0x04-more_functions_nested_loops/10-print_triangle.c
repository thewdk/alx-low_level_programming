#include "main.h"

/**
* print_triangle - draws a triangle in the terminal.
* @size: size of triangle
* Return: nothing
**/

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		i = 0;

		while (i < size)
		{
			j = i;

			while (j < size - 1)
			{
				_putchar(' ');
				j++;
			}
			k = 0;

			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
