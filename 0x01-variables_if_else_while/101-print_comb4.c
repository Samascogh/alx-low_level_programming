#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int c;
	int b;
	int k;

	for (c = 48; c < 56; c++)
	{
		for (b = c + 1; b < 57; b++)
		{
			for (k = b + 1; k < 58; k++)
			{
				putchar(c);
				putchar(b);
				putchar(k);
				if (c != 55 || b != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
