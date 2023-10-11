#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return:0 or 1
 */
int print_last_digit(int n)
{
	int t;

	if (n < 0)
		t = -1 * (n % 10);
	else
		t = n % 10;
	_putchar(t + '0');
	return (t);
}
