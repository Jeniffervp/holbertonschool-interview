#include "palindrome.h"


/**
 * is_palindrome - Function to check if a unsigned long integer is a palindrome
 * @n: the number to check
 *
 * Return: 1 if is palindrome, 0 if not.
 */

int is_palindrome(unsigned long n)
{
	unsigned long rever = rev(n, 0);
	if (n == rever)
		return (1);
	return (0);
}


/**
 * rev - Function to reverse the number
 * @n: the number to revert
 * @rev: the reverse n
 *
 * Return: function rev until n equals to 0.
 */

unsigned long rev(unsigned long n, unsigned long rever)
{
	if (n == 0)
		return rever;
	rever = (rever * 10) + (n % 10);
	return (rev(n / 10, rever));
}
