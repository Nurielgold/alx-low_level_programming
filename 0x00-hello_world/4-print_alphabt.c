#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line, except q and c
 * Return: lways 0
 */
int main(void)
{
	char la;

	for (ch = 'a'; la <= 'Z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
