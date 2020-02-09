#include<stdio.h>
/**
 * main -entry point
 *
 * Return: Always o success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int b = 0;

	for (i = 0; i <= 98; i++)

	{
		b = i + 1;
		for (j = b; j <= 99; j++)
		{

			k = i/10;
			l = i%10;
			m = j/10;
			n = j%10;
			putchar(k + '0');
			putchar(l + '0');
			putchar(' ');
			putchar(m + '0');
			putchar(n + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
		
	}
	putchar('\n');
	return (0);
}
