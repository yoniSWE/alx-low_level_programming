#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all single digit numbers starting from 0 using
 * putchar only
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
		putchar('0' + b);

	putchar('\n');

	return (0);
}
