#include <stdio.h>
/*
 * main - entry point
 *
 * Description: Print lowercase alphabets excluding q and e
 * Return: 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; ++b)
	{
		if (b != 'e' && b != 'q')
			putchar(b);
	}

	putchar('\n');

	return (0);
}
