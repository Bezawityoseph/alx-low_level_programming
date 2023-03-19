#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 00 ; i <= 98 ; i++)
	{
		for (j = 01 ; j <= 99 ; j++)
		{
			putchar(i + '0');
			putchar(j);
			{
				if (i < j && i != j)
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
