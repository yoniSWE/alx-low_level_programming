#include <stdio.h>
/**
 * main - main block
 * Decsription: Prints all possible combination of single digit numbers
 * of base 10 starting from 0, followed by a newline.
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (c < 10)
	{
		putchar(48 + c);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');

	return (0);
