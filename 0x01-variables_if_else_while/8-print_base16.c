#include <stdio.h>

/**
 * main - prints al the numbers of base 16 in lower case,
 *  followed by a new line
 *  Return: always 0 (succes)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

