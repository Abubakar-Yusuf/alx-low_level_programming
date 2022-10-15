#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	putchar("\n");
	return (0);
}
