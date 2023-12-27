#include <stdio.h>

/**
 * main - function of the program
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';
	char Alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (Alphabet <= 'Z')
	{
		putchar(Alphabet);
		Alphabet++;
	}

	putchar('\n');

	return (0);
}
