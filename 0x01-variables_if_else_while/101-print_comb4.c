#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (success)
 */
int main(void)
{

	int i;
	int j;
	int k;
	int a = 1;
	int b = 2;

	for (i = 0; i <= 7; i++)
	{
		a = i + 1;
		for (j = a; j <= 8; j++)
		{
			b = j + 1;
			for (k = b; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == 7  && j == 8 && k == 9))
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
