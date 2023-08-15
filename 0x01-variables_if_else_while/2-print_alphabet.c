#include <stdio.h>
/**
 * main - Entry point of the program
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	/* Print the lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
