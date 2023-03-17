#include <stdio.h>

/*
 * main- prints" the size of diffrent types of variables."
 *
 *
 * Return: Always 0.
 */

int main(void)

{
	printf("Size of a Char: %zu byte(s)\n", sizeof(char));
	printf("Size of an Int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu cyte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byt(s)\n", sizeof(float));
	return (0);
}
