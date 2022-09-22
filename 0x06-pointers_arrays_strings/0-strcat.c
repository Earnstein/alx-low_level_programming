#include "main.h"

/**
 * _strcat - function to concatenate two strings and return a new string
 * @dest: string 1
 * @src: string 2
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
