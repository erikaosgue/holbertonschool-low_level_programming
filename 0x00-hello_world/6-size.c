#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
