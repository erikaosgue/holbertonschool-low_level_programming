#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 *
 * Return: void type
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("is positive\n", n);

else if (n == 0)
printf("is zero\n", n);

else
printf("is negative\n", n);
return (0);
}
