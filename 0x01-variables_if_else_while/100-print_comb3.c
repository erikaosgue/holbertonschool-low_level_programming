#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always o (succes)
 */
int main(void)
{

	int i;
	int j;
	int b = 0;

	for (i = 0; i <= 9; i++)
	{

		b++;
		for (j = b; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
