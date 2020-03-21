#include <stdio.h>
/**
 * _startbeforemain - prints a senstence before the main is executed
 * Return: 0
 */
void _startbeforemain(void) __attribute__ ((constructor));

void _startbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
