#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * will use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: void
 */
char *_strncat(char *dest, char *src, int n);
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}

	dest[a] = '\0';
	return (dest);
}
