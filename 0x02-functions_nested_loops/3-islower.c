#include "main.h"

/**
 * _islower - checks if char is in lowercase.
 * @c: is the char to be checked
 * written by Pharm Akhigbe Blessed on 13/12/2022
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
