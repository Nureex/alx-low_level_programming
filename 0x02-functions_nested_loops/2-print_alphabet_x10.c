#include <unistd.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			write(1, &letter, 1);
			letter++;
		}

		write(1, "\n", 1);
	}
}
