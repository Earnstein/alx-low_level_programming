#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: 0.
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char ayo;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		ayo = s[i];
		s[i++] = s[len];
		s[len] = ayo;
	}
}
