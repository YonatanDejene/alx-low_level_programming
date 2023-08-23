#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);

/**
* is_prime_number - Check if the given number is prime or not
* @n: The given number.
*
* Return: int.
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
* check_prime - Check the given number
* @n: Given number
* @i: Itration times
*
* Return: 1 if given number is prime or 0 if composit
*/

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
