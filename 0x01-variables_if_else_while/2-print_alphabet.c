#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabets in lower case,
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
