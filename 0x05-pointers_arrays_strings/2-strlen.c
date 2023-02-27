# include "main.h"

/**
 *_strlen - function that returns the length of a string
 * @s: check the lenght of the string
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);

}

