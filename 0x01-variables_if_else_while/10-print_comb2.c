#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

        for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++);
		{
			putchar(i);
			putchar(n);
			if (!(i ==  9 && n == 9))
			{
				putchar(',');
				putchar(' ');
			}
                 }
	}
	putchar('\n');
	return (0);
}
