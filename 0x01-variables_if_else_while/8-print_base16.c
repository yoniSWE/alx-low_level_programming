#include <stdio.h>
/**
 * main -entry point
 *
 * Description: Print all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar('0' + c);

	for (c = 0; c < 6; c++)
		putchar('a' + c);

	putchar('\n');

	return (0);
}
