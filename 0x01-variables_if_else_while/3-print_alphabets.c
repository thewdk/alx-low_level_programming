#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	int i = 0;
/* write your code */
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	ch = 'A';
	i = 0;
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
