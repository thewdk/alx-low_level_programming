#include "main.h"
/**
 * rev_string - returns the length of a string.
 * @s: array with the characters of the word
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, i, h;
	char t;

	for (l = 0; s[l] != '\0'; l++)
	;
	i = 0;

	h = l / 2;

	while (h--)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
		i++;
	}
}
