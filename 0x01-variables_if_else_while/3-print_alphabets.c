#include <stdio.h>
/**
 * main - print lowercase and uppercase alphabet
 *
 * Return: 0
*/
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}

	c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
