#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	return (0);
}

