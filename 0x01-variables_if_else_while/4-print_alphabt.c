#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char word;

		for (word = 'a'; word <= 'z'; word++)
		{
		if (word != 'e' && word != 'q')
		putchar(word);
		}
		putchar('\n');

	return (0);
}
