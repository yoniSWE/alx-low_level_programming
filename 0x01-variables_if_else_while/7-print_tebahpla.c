#include <stdio.h>
/**
 * main -entry point
 *
 * Description: Print the lowercase alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 26; c > 0; c--)
		putchar('a' + c);

	putchar('\n');

	return (0);
}
