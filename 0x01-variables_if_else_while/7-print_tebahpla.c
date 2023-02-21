#include <stdio.h>
/**
 * main - print the alphaet in reverse other
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar("\n");
	return (0);
}
