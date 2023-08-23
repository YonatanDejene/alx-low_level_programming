#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - Print the opcodes.
* @a: Address of the main func.
* @n: Num of bytes
*
* Return: Nothing.
*/
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
* main - Prints the opcode.
* @argc: Number of arguments.
* @argv: Array of pointers.
*
* Return: Nothint.
*/
int main(int argc, char **argv)
{
	int m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, m);
	return (0);
}
