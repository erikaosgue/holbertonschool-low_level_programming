#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	
	if (lastdigit > 5)
        printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
	if else (lastdigit == 0)
	printf("last digit of %d\n is %d\n and is 0\n", n, lastdigit);
	else
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	return (0);
}

