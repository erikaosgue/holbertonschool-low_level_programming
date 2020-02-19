#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
int _atoi(char *s)
{
	int j;
	int i;
	int k = 0;
	int l = 0;
	int minus = 0;
	int caja = 0;
	/*int p = 0;*/

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			l++; 
			printf("%d contador the numeros", l);
			if (!(s[i + 1] >= 48 && s[i + 1] <= 57))
				break;

		}
	}
	k = i;
	/*p = l - 1;*/
	if (minus % 2 != 0)
	for (j = k; j < l; j++)
	{
		caja = caja * 10 + s[j] - '0';
		/*caja += s[j] * 10 ** (l - p);*/
		/*p--;*/
	}
	if (minus % 2 != 0)
	{
		caja = caja * - 1;
	}
	return (caja);

}
