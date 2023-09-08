#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lower caase, and then in upper case,
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	int  ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
